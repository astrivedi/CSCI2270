#include<iostream>
#include"bstTree.hpp"
int main() {
    BST* t = new BST();

        t->insert(10);
        t->insert(1);
        t->insert(5);
        t->insert(7);

        t->print();
    return 0;
}