#include<iostream>
#include "RBT.hpp"
using namespace std;

RBT::RBT() {
  root = 0; // tree is empty
}

RBT::~RBT() {
    recursive_destruct(root); 
}

/*
  Prints a binary tree in a 2D fashion.
  Note: The image of the tree is left rotated by 90 degrees.
*/
void _prettyPrint(Node* T, int space)
{
  // Base case
  if (T == 0) return;
  
    // Increase distance between levels
  space += COUNT;
  
  // Process right child first
  _prettyPrint(T->right, space);
  
  // Print current node after space
  // count
  printf("\n");
  for (int i = COUNT; i < space; i++)
    printf(" ");
  printf("%d\n", T->key);
  
  // Process left child
  _prettyPrint(T->left, space);
}

void RBT::prettyPrint()
{
  _prettyPrint(root, 1);
}



void RBT::insert(int val){
  insert(root, 0, val);
}

Node* RBT::search(int k) {
  return search(root, k);
}

int RBT::size() {
 return size(root);
}

void RBT::inOrder() {
  inOrder(root);
}
void RBT::preOrder() {
  preOrder(root);
}
void RBT::postOrder() {
  postOrder(root);
}

Node* RBT::getMin() {
  return getMin(root);
}
Node* RBT::getMax() {
  return getMax(root);
}

int RBT::getSum() {
  return getSum(root);
}

void RBT::remove(int val){
  remove(root, 0, val);
}

void RBT::insert(Node* &T, Node* p, int val) {
  if (T == 0) { // Tree is empty 
    Node* node = new Node(val);
    node->parent = p;
    T = node;
    return;
  }
  else {
    if (val < T->key) insert(T->left, T, val);
    else if (val > T->key) insert(T->right, T, val);
   
    return;  
  }
}
 

void RBT::remove(Node* &T, Node* p, int val) {
      if (T == 0) {
       return; 
      }
      else { // Node(key,left, right)
        if (val < T->key) remove(T->left, T, val);
        else if (val > T->key) remove(T->right, T, val); 
        else { // We are currently at the node to be deleted...
          if (T->left == 0 && T->right == 0) {
            delete T;
            T = 0;
            return;
          }
          else if (T->left == 0) {
            Node* curr = T->right;
            delete T;
            T = curr;
            T->parent = p;
            return;
          }
          else if (T->right == 0) {
             Node* curr = T->left;
            delete T;
            T = curr;
            T->parent = p;
            return;
          }
          else {
            // Most general case
          
            Node* minRight = getMin(T->right);
            T->key = minRight->key;
            remove(T->right, T, minRight->key);
            return;
          }
        }
      }
}
  
int RBT::getSum(Node* T) {
   if (T == 0) return 0;
   else return T->key + getSum(T->left) + getSum(T->right);
}
  
void RBT::recursive_destruct(Node* T) {
  if (T == 0) { // Tree is empty
    return;
  }
  else {
      recursive_destruct(T->left);
      recursive_destruct(T->right);
      delete T;
      return;
  }
}
  
Node* RBT::getMin(Node* T) {
    if (T == 0) return 0;
    else {
      if (T->left == 0) return T;
      else return getMin(T->left);
    }
}

Node* RBT::getMax(Node* T) {
  if (T == 0) return 0;
    else {
      if (T->right == 0) return T;
      else return getMax(T->right);
    }
}

void RBT::inOrder(Node* T) {
  if (T == 0) return;
  else {
    inOrder(T->left);
    cout << T->key << " ";
    inOrder(T->right);
  }
}

void RBT::preOrder(Node* T) {
   if (T == 0) return;
  else {
    cout << T->key << " ";
    preOrder(T->left);
    preOrder(T->right);
  }
}

void RBT::postOrder(Node* T) {
   if (T == 0) return;
  else {
    postOrder(T->left);
    postOrder(T->right);
    cout << T->key << " ";
  }
}

int RBT::size(Node* T) {
   if (T == 0) return 0;
   else return 1 + size(T->left) + size(T->right);
}

Node* RBT::search(Node* T, int val) {
    if (T == 0) return 0;
    else {
      if (T->key == val) return T;
      else if (val < T->key) return search(T->left, val);
      else return search(T->right, val);
    }

}

void RBT::rotateLeft(){
  rotateLeft(root);
  return;
}


void RBT::rotateRight(){
  rotateRight(root);
  return;
}

void RBT::rotateLeft(Node* &T) {
  if (T->right == 0) return;
  else {
    Node* new_root = T->right;
    Node*  new_right = T->right->left;
      T->right = new_right;
      if (new_right != 0) new_right->parent = T;
      new_root->parent = T->parent;
      new_root->left = T;
      T = new_root;
      return;
  }
}
void RBT::rotateRight(Node* &T) {
  if (T->left == 0) return;
  else {
    Node* new_root = T->left;
    Node*  new_left = T->left->right;
      T->left = new_left;
      new_left->parent = T;
      new_root->parent = T->parent;
      new_root->right = T;
      T = new_root;
      return;
  }
}
