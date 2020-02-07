#include<iostream>
#include "LinkedList.hpp"
using namespace std;

LinkedList::LinkedList() {
    head = 0;
    tail = 0;   
}
    
LinkedList::~LinkedList() {
    for (Node* tmp = head; tmp != 0; tmp = tmp->next) {
        delete tmp;
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

    if (left == 0) { //insert at the head
        tmp->next = head;
        head = tmp;
    }
    else if (left == tail) { //insert at the tail
        left->next = tmp;
        tail = tmp;
    }
    else { //insert in the middle
        tmp->next = left->next;
        left->next = tmp; 
    }

    return;    
}

void LinkedList::remove(Node* pos) {
    Node* prev = 0;
    
    for (Node* curr = head; curr != 0; prev = curr, curr = curr->next) {
        if (curr == pos) {
            if (prev == 0) { // delete the head node
                if (head->next != 0) head = head->next;
                else {
                    head = 0;
                    tail = 0;
                }
                delete pos;
            }
            else { // delete middle or last node
                prev->next = curr->next;
                delete pos;
                if (prev->next == 0) {
                    tail = prev;
                }
            }
        }
    }
    return;
   }