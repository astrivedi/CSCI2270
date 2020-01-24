// program36.cpp-- pass by reference  
#include<iostream>
void swap_simple(int &x, int &y);
int main(int argc, char* argv[]) 
{
  int x = 5;
  int y = 7;
  
  std::cout << "x = " << x << " y = " << y << std::endl;
  swap_simple(x, y); // pass by value
  std::cout << "x = " << x << " y = " << y << std::endl;
  
  return 0;
}
void swap_simple(int &x, int &y) {
  int z;
  z = x;
  x = y;
  y = z;
}
