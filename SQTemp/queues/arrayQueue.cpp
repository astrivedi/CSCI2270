#include <iostream>
#include "arrayQueue.hpp"

ArrayQueue::ArrayQueue() {

}

ArrayQueue::ArrayQueue(int cap) {

}

ArrayQueue::~ArrayQueue() {

}

bool ArrayQueue::isEmpty() {
  return true;
}

bool ArrayQueue::isFull() {
  return true;
}

int ArrayQueue::getSize() {
  return 0;
}

void ArrayQueue::enqueue(int element) {

}

int ArrayQueue::dequeue() {

}

int ArrayQueue::peek() {

}

void ArrayQueue::prettyPrint() {
  if (isEmpty()) {
    std::cout << "head->[]<-tail" << std::endl;;
  }
  else {  
    std::cout << "head->[";
    for (int i = 0; i <= tail; i++) {
      std::cout << items[i] << " ";
    }
    std::cout << "]<-tail"<<std::endl;
  }
}
