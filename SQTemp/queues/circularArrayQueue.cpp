#include <iostream>
#include "circularArrayQueue.hpp"
using namespace std;

CircularArrayQueue::CircularArrayQueue() {
  capacity = DEFAULT_SIZE;
  items =  new int[capacity];
  head = -1;
  tail = -1;
  size = 0;
}

CircularArrayQueue::CircularArrayQueue(int cap) {
  capacity = cap;
  items =  new int[capacity];
  head = -1; // not assigned to any index
  tail = -1;
  size = 0; 
}

CircularArrayQueue::~CircularArrayQueue() {
  delete[] items;
}

bool CircularArrayQueue::isEmpty() {
  return (head == -1);
}

bool CircularArrayQueue::isFull() {
  return (getSize() == capacity);
}

int CircularArrayQueue::getSize() {
  if (head <= tail) {
    return tail - head + 1;
  }
  else {
    return capacity - (head - tail) + 1;
  }
}

void CircularArrayQueue::enqueue(int element) {
  if (isFull()) {
    cerr << "Queue overflow" << endl;
  }
  if (head == -1) {
        head = 0;
        tail = 0; 
        items[tail] = element;
  }
  else {
    if (tail == capacity-1) {
      items[0] = element;
      tail = 0;
    }
    else {
      tail = tail + 1;
      items[tail] = element;
    }
  }
}

int CircularArrayQueue::dequeue() {
  if (isEmpty()) {
    cerr << "Queue is empty" << endl;
  }
  if 
}

int CircularArrayQueue::peek() {

}

void CircularArrayQueue::prettyPrint() {
  if (isEmpty()) {
    std::cout << "head->[]<-tail" << std::endl;;
  }
  else {  
    std::cout << "head->[";
    if (head <= tail) { 
      for (int i = head; i <= tail; i++) {
	std::cout << items[i] << " ";
      }
    }
    else {
      for (int i = head; i < capacity; i++) {
	std::cout << items[i] << " ";
      }
      for (int i = 0; i <= tail; i++) {
	std::cout << items[i] << " ";
      }
    }
    std::cout << "]<-tail"<<std::endl;
  }
}

void CircularArrayQueue::prettyPrintCircular() {
  if (isEmpty()) {
    std::cout << "head->[]<-tail" << std::endl;;
  }
  else {  
    std::cout << "[";
    for (int i = 0; i < capacity; i++) {
      if (head <= tail) {
	if (i >= head && i <= tail) {
	  if ((i == head) && (i == tail)) std::cout << "#"<<items[i]<<"* ";
	  else if (i == head) std::cout << items[i] <<"* ";
	  else if (i == tail) std::cout << "#"<<items[i];
	  else std::cout << items[i] << " ";
	}
	else std::cout << "B ";
      }
      else {
	if (i <= tail || i >= head) {
	  if ((i == head) && (i == tail)) std::cout << "#"<<items[i]<<"* ";
	  else if (i == head) std::cout << items[i] <<"* ";
	  else if (i == tail) std::cout << "#"<<items[i];
	  else std::cout << items[i] << " ";
	}
	else std::cout << "B ";
      }
    }
    std::cout << "]"<<std::endl;
  }
}
