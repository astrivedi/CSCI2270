// program42.cpp 
#include<iostream>
int* foo(int x);
int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "provide a number as an argument" << std::endl;
    return -1;
  }
  else {
    int *res = foo(atoi(argv[1]));
    std::cout << "The function returned: " << *res << std::endl; 
    *res = 1234; // change the value stored at address pointed by res 
    std::cout << "New value: " << *res << std::endl;
    // Some other computation that uses "res"
    // Some other computation that does not use "res"
    return 0;
  }
}

int* foo(int x) {
  int *z = new int(x*x);
  return z;
}
