#include<iostream>
#include "listclass.hpp"
using namespace std;

int main() {
  LinkedList llist;
  
  llist.insertNode(0, 22);
  llist.insertNode(0, 23);
  llist.insertNode(0, 55);
  llist.insertNode(0, 77);

  llist.traverse();

  llist.deleteNode(llist.search(23));
  llist.traverse();

  llist.deleteNode(llist.search(55));
  llist.deleteNode(llist.search(22));
  llist.deleteNode(llist.search(77));

  llist.traverse();

    llist.insertNode(0, 77);

  llist.traverse();
  llist.deleteNode(llist.search(77));
  llist.traverse();

  return 0;
}
