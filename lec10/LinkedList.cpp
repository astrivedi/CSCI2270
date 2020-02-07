#include<iostream>
#include "LinkedList.hpp"
using namespace std;

LinkedList::LinkedList() {
    head = 0;
    tail = 0;   
}
    
LinkedList::~LinkedList() {

    for (Node* curr = head; curr !=0;) {  
        Node* tmp = curr->next;
        delete curr;
        curr = tmp;
    }

    head = 0;
    tail = 0;

}

void LinkedList::traverse() {
    cout << "[ ";
    for (Node* tmp = head; tmp != 0; tmp = tmp->next) {
        cout << tmp->data << " ";
    }
    cout << "]" << endl;
}

Node* LinkedList::search(int item) {

    for (Node* tmp = head; tmp != 0; tmp = tmp->next) {
        if (tmp->data == item) return tmp;
    }

    return 0;
}

void LinkedList::insert(Node* left, int item) {
    Node* tmp = new Node(item, 0);

    if (left == 0) {
        tmp->next = head;
        head = tmp;
        if (tail == 0) tail = head;
    }
    else if (left == tail) {
        tail->next = tmp;
        tail = tmp;    
    }
    else {

    }


    return;    
}

void LinkedList::remove(Node* pos) {
    
    
    return;
   }