#include<iostream>
#include "LinkedList.hpp"

using namespace std;

int main() {
    LinkedList ll;

    ll.traverse();

    ll.insert(0, 33);
    ll.insert(0, 44);
    ll.insert(0, 55);
    ll.insert(0, 66);
    ll.insert(0, 77);
    
    ll.traverse();

    Node* tmp = ll.search(44);
    ll.insert(tmp, 50);

    ll.traverse();

    tmp = ll.search(33);
    ll.insert(tmp, 100);

    ll.traverse();

    tmp = ll.search(44);
    ll.remove(tmp);

    ll.traverse();
    return 0;

}