// program9.cpp 
#include<iostream>
int main(int argc, char* argv[]) 
{
  int* pa = 0; // pa is a pointer to integers
  int n;
  std::cout <<  "Enter dynamically allocated array size:";
  std::cin >> n;
  pa = new int[n];
  for (int i = 0; i < n; i++) {
    pa[i] = i;
  }
  // Use a as a normal array 
  delete[] pa; // When done, free memory pointed to by a.
  pa = 0; //// Clear a to prevent using invalid memory reference.
  return 0;
}
