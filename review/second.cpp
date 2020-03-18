#include<iostream>
using namespace std;

void foo(int* &a) {
    int* c = new int[10];
    c[0]= 55;
    c[3] = 77;
    a = c;
}
int main() {
    int* b = new int[10]; // dynamic allocation ...
    b[0] = 20; 
    b[3] = 30;  
    foo(b);
    cout << b[0] << endl;

    return 0;
}