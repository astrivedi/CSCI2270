// program33-m.cpp
#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int x = 7;
  
  //int& y; // error
  //int& y = 7; // error
  int& y = x; // once and for all bound to x

  cout << "x = " << x << " Add of x:" << &x << endl;
  cout << "y = " << y << " Add of y: " << &y << endl;

  y++;

  cout << "x = " << x << " Add of x:" << &x << endl;
  cout << "y = " << y << " Add of y: " << &y << endl;

  return 0;
}
