#include<iostream>
#include "listclass.hpp"
using namespace std;

LinkedList::LinkedList() {
  head = 0;
}

LinkedList::~LinkedList() {

}

void LinkedList::traverse() {
  Node* curr = head;
  
  cout<<"[";
  while (curr != 0) {
    cout << curr->data << "->";
    curr = curr->next;
  }
  cout<< "]" << endl;
}

Node* LinkedList::search(int val) {
  Node* curr = head;
  
  while (curr != 0) {
    if (curr->data == val) return curr;
    curr = curr->next;
  }
  
  return 0;
}

void LinkedList::insertNode(Node* left, int value) {

  return;
}

void LinkedList::deleteNode(Node* d_node) {

  return;
}
