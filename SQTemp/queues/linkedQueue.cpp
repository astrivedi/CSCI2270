#include <iostream>
#include "linkedQueue.hpp"

LinkedQueue::LinkedQueue() {

}

LinkedQueue::LinkedQueue(int cap) {

}

LinkedQueue::~LinkedQueue() {

}

bool LinkedQueue::isEmpty() {
  return false; 
}

bool LinkedQueue::isFull() {
  return false;
}

int LinkedQueue::getSize() {
  return size;
}

void LinkedQueue::enqueue(int element) {

}

int LinkedQueue::dequeue() {

  return 1;

}

int LinkedQueue::peek() {
  return 1;
}

void LinkedQueue::prettyPrint() {
  if (isEmpty()) {
    std::cout << "head->[]<-tail" << std::endl;;
  }
  else {  
    std::cout << "head->[";
    QueueNode* tmp = head;
    while (tmp != 0) {
      std::cout << tmp->item << " ";
      tmp = tmp->next;
    }
    std::cout << "]<-tail"<<std::endl;
  }
}
