#include<iostream>

using namespace std;
void fun1(int x, int y);

int main() {
  int a = 20;
  int b = 30;

  cout << " a = "<< a << " and " << "b = "  << b << endl;
  fun1(20, 30);
  cout << " a = "<< a << " and " << "b = "  << b << endl;

  return 0;
}

void fun1(int x, int y) {
  int z;
  cout << " x = "<< x << " and " << "y = "  << y << endl;
  z = x;
  x = y;
  y = x;
  cout << " x = "<< x << " and " << "y = "  << y << endl;
}
