#ifndef __LINKEDLIST_HPP__
#define __LINKEDLIST_HPP__

// Define data-type of a single node
struct Node {
    int data; // value of the current node
    Node* next; // address of the next node
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
    public: 
        LinkedList();
        ~LinkedList();
        void traverse();

}

#endif /* __LINKEDLIST_HPP__*/