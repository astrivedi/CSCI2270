// program34.cpp -- pass by value
#include<iostream>
void swap_simple(int a, int b);
int main(int argc, char* argv[]) 
{
  int x = 5;
  int y = 7;
  
  std::cout << "x = " << x << " y = " << y << std::endl;
  swap_simple(x, y); // pass by value
  std::cout << "x = " << x << " y = " << y << std::endl;
  
  return 0;
}
void swap_simple(int a, int b) {
  int c;
  c = a;
  a = b;
  b = c;
}
