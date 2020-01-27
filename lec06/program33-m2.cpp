// program33-m2.cpp
#include<iostream>
using namespace std;

void foo(int& y)
{
  y = 20;
}

int main(int argc, char* argv[]) {
  int x = 7;
  cout << "x = " << x << " Add of x:" << &x << endl;

  foo(x);

  cout << "x = " << x << " Add of x:" << &x << endl;
  return 0;
}
