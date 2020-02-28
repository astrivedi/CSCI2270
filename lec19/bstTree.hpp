#pragma once
#include<iostream>
using namespace std;

struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;
};

class BST {
    private:    
        TreeNode* root;
    public: 
        BST();
        ~BST();
        void insert(int key);
        TreeNode* search(int key);
        void remove(TreeNode* t);
        void print();
        int size();
        TreeNode* searchMin();
        void inOrder();
        void preOrder();
        void postOrder();
    private:    
        void destruct_Recursive(TreeNode* t);
        void insert_Recursive(TreeNode* &root, int key);
};