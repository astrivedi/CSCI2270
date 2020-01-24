#include<iostream>

using namespace std;

void fun4() {
int x[10];
  cout << x << endl;
}

void fun3() {
  int x[10];
  cout << x << endl;
  fun4();
  }
void fun2() {
  int x[10];
  cout << x << endl;
  fun3();
}
void fun1() {
  int x[10];
  cout << x << endl;
  fun2();
}

int main() {
  int* x1 = new int[10];
  int* x2 = new int[10];
  int* x3 = new int[10];
  int* x4 = new int[10];

  cout << x1 << endl;
  cout << x2 << endl;
  cout << x3 << endl;
  cout << x4 << endl;

  cout << "**********************************" << endl;
  fun1();
  
  
}
