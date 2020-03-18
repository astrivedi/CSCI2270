#include<iostream>
using namespace std;

class Address {
    string name;
    int id;
public:
    Address() {
        this->name = "something";
        this->id = 100;
    }
    
};



int main() {
    Address A; // stack memory 
    A.name = "Ashutosh";
    A.id = 300;

    Address* B = new Address;

    (*B).name = "Maciej";
    (*B).id = 100;   

    B->name = "Asa";
    B->id = 200;

    return 0;
}