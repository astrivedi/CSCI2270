// program41.cpp 
#include<iostream>
int& foo(int x);
int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "provide a number as an argument" << std::endl;
    return -1;
  }
  else {
    int res = foo(atoi(argv[1]));
    std::cout << "The function returned: " << res << std::endl; 
    res = 1234; // change the value stored at address pointed by res 
    std::cout << "New value: " << res << std::endl;
    
    return 0;
  }
}

int& foo(int x) {
  int z = x*x;
  return z;
}
