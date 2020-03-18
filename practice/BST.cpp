#include<iostream>
#include "BST.hpp"
using namespace std;

// Implement all of the methods declared in the BST class using recursive procedures. 

BST::BST() {
  root = 0;
}

BST::~BST() {
  recursive_destruct(root);
}

Node* BST::search(int k) {
  return search(root, k);
}

int BST::size() {

  return size(root);
}

/*
  Prints a binary tree in a 2D fashion.
  Note: The image of the tree is left rotated by 90 degrees.
*/
void BST::prettyPrint(Node* T, int space)
{
  // Base case
  if (T == 0) return;
  
    // Increase distance between levels
  space += COUNT;
  
  // Process right child first
  prettyPrint(T->right, space);
  
  // Print current node after space
  // count
  printf("\n");
  for (int i = COUNT; i < space; i++)
    printf(" ");
  printf("%d\n", T->key);
  
  // Process left child
  prettyPrint(T->left, space);
}

void BST::prettyPrint()
{
  prettyPrint(root, 1);
}

void BST::inOrder() {
  inOrder(root);
}
void BST::preOrder() {
  preOrder(root);
}
void BST::postOrder() {
  postOrder(root);
}

Node* BST::getMin() {
  return getMin(root);
}
Node* BST::getMax() {
  return getMax(root);
}

int BST::getSum() {
  return getSum(root);
}

void BST::insert(int val){
  insert(root, val);
}

void BST::remove(int val){
  remove(root, val);
}

void BST::insert(Node* &T, int val) {
  if (T==0) {
    Node* node = new Node(val);
    T = node;
    return;
  }
  else {
      if (val < T->key) insert(T->left, val);
      else if (val > T->key) insert(T->right, val);
      return;
  }
}

void BST::remove(Node* &T, int val) {
    if (T == 0) return 0;
    else {
      if (T->key == val) {
        //remove this node
        if (T->left == 0) T = T->right;
        else if (T->right == 0) T = T->left;
        else {
          T->key = T->getMin()->key;
        }
      }
      else if (val < T->key) remove(T->left, val);
      else remove(T->right, val);
    }

}
  
int BST::getSum(Node* T) {
  if (T == 0) return 0;
  else {
    return T->key + getSum(T->left) + getSum(T->right);
  }
}
  
void BST::recursive_destruct(Node* T) {
  if (T == 0) return;
  else {
    recursive_destruct(T->left);
    recursive_destruct(T->right);
    delete T;
    return;
  }
}
  
Node* BST::getMin(Node* T) {
    if (T == 0) return 0;
    else {
      if (T->left == 0) return T;
      else return getMin(T->left);
    }
}

Node* BST::getMax(Node* T) {
  if (T == 0) return 0;
    else {
      if (T->right == 0) return T;
      else return getMin(T->right);
    }
}

void BST::inOrder(Node* T) {
  if (T == 0) return;
 else {
  inOrder(T->left);
  cout << T->key << " ";
  inOrder(T->right);
  
  return;
 } 
}

void BST::preOrder(Node* T) {
   if (T == 0) return;
 else {
  cout << T->key << " ";
  inOrder(T->left);
  inOrder(T->right);
 
  return;
 } 
}

void BST::postOrder(Node* T) {
   if (T == 0) return;
 else {
  inOrder(T->left);
  cout << T->key << " ";
  inOrder(T->right);
  
  return;
 } 
}

int BST::size(Node* T) {
  if (T == 0) return 0;
  else return (1 + size(T->left) + size(T->right));
}

Node* BST::search(Node* T, int val) {
  if (T == 0) {
    return 0;
  }
  else {
    if (T->key == val) return T;
    else if (val < T->key) return search(T->left, val);
    else return search(T->right, val);
  }
}
