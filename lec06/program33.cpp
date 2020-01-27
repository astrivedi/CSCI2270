// program33.cpp 
#include<iostream>
int main(int argc, char* argv[]) 
{
  int i = 1;
  int &r = i; // initalized
  // int &s;  // Error: must be initialized unless "extern"
  int x = r;  
  r = 2;
  
  r++;
  i++;
  std::cout << " x = " << x <<" r = " << r << "i = " << i << std::endl;

  r = r + i;
  std::cout << " x = " << x <<" r = " << r << "i = " << i << std::endl;
  return 0;
}
