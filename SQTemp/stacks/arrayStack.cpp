#include <iostream>
#include "arrayStack.hpp"
using namespace std;

ArrayStack::ArrayStack() {
    capacity = DEFAULT_SIZE;  
    top = -1;
    items = new int[capacity]; 
}

ArrayStack::ArrayStack(int cap) {
  capacity = cap;  
  top = -1;
  items = new int[capacity]; 
}

ArrayStack::~ArrayStack() {
  delete [] items;
  items = 0;
}

bool ArrayStack::isEmpty() {
  return (top == -1);
}

bool ArrayStack::isFull() {
  return (top == capacity-1);
}

void ArrayStack::push(int element) {
  if (isFull()) {
      cerr << "Stack overflow!!! Push failed" << endl;
  }
  else {
    items[top+1] = element;
    top = top + 1;
  } 
}

int ArrayStack::pop() {
  if (isEmpty()) {
    cerr << "Stack underflow!!!  Returning Garbage value!" << endl;
    return -1;
  }
  else {
    int result = items[top];
    top = top -1;
    return result; 
  }
}

int ArrayStack::peek() {
  if (isEmpty()) {
    cerr << "Stack underflow!!!  Returning Garbage value!" << endl;
    return -1;
  }
  else {
    return items[top]; 
  }
}

void ArrayStack::prettyPrint() {
  if (isEmpty()) {
    std::cout << "[]" << std::endl;;
  }
  else {  
    std::cout << "[";
    for (int i = 0; i <= top; i++) {
      std::cout << items[i] << " ";
    }
    std::cout << "]<-top"<<std::endl;
  }
}
