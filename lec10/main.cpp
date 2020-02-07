#include<iostream>
#include "LinkedList.hpp"

using namespace std;

/* Implement your driver code here */
int main() {
    LinkedList ll;
    ll.insert(0, 22);
    ll.insert(0, 44);
    ll.insert(0, 66);
    ll.traverse();


    Node* tmp =ll.search(22);
    ll.insert(tmp, 99);
    
    ll.traverse();    

    return 0;
}