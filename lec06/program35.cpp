// program35.cpp -- pass by pointers 
#include<iostream>
void swap_simple(int *a, int *b);
int main(int argc, char* argv[]) 
{
  int x = 5;
  int y = 7;
  
  std::cout << "x = " << x << " y = " << y << std::endl;
  swap_simple(&x, &y); // pass by pointers
  std::cout << "x = " << x << " y = " << y << std::endl;
  
  return 0;
}
void swap_simple(int *a, int *b) {
  int z;
  z = *a;
  *a = *b;
  *b = z;
}
