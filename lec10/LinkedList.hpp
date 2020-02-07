#ifndef __LINKEDLIST_HPP__
#define __LINKEDLIST_HPP__

// Define data-type of a single node
struct Node {
    int data; // value of the current node
    Node* next; // address of the next node

    Node() {next = 0;}
    Node(int d, Node* n) {data = d; next = n;}
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
    
    public: 
        LinkedList();
        ~LinkedList();
        void traverse();
        Node* search(int item);
 
        void insert(Node* left, int item); // precondition: left is in the list
 
        void remove(Node* pos); // precondition: pos is in the list

};

#endif /* __LINKEDLIST_HPP__*/