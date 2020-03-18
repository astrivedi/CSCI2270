#include<iostream>
#include<string>

#include "List.hpp"
using namespace std;


List::List() {        
    list = new string[1000];
    size = 0;
    capacity = 1000;
}

List::~List() {
    delete[] list;
    list = 0;
}

void List::insert(string data, int idx) {
    if (idx > size) {
        cerr << "ERROR: operation not allowed as it will fragment list" << endl;
    }
    else if (idx > capacity) {
        cerr << "Capacity reached" << endl;
    }
    else {
        list[idx] = data;
        size = size + 1;
    }
    return;
}

void List::traverse() {
    for (int i =0; i < size; i++) cout << list[i] << endl;
}