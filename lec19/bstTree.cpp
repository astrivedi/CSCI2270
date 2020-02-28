#include<iostream>
#include "bstTree.hpp"
using namespace std;

BST::BST() {
    root = 0;
}

BST::~BST() {
    destruct_Recursive(root);
}

void BST::destruct_Recursive(TreeNode* t) {
    if (t == 0) return;
    else {
        destruct_Recursive(t->left);
        destruct_Recursive(t->right);
        delete t;
        return;
    }
}

void BST::insert(int key) {
    insert_Recursive(root, key);
}

void BST::insert_Recursive(TreeNode* &t, int key) {
    if (t == 0) {
        TreeNode* tmp = new TreeNode();
        tmp->key = key;
        tmp->left = 0;
        tmp->right = 0;
        t = tmp;
        return;
    }
    else {
        if (key < t->key) insert_Recursive(t->left, key);
        else insert_Recursive(t->right, key);
        return;
    }
}

TreeNode* BST::search(int key) {

    return 0;
}
void BST::remove(TreeNode* t) {

}

void BST::print() {

}
int BST::size() {

return 0;
}
TreeNode* BST::searchMin() {

    return 0;
}
void BST::inOrder() {

}
void BST::preOrder(){

}
void BST::postOrder(){

}