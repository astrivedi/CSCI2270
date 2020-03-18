#ifndef __LIST_HPP__
#define __LIST_HPP__
#include <string>
using namespace std;

class List {
    private:
        string* list;
        int size;
        int capacity;
    public: 
        List();
        ~List();
        void insert(string data, int idx);
        void traverse();
};

#endif // __LIST_HPP__