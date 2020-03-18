#include<iostream>
#include "List.hpp"

int main() {
    List l;     
    
    l.insert("AAAA", 0);
    l.insert("Erie", 0);
    l.insert("Denver", 0);

    l.traverse();

    return 0;   
}