// program5.cpp 
#include<iostream>
int main(int argc, char* argv[]) 
{
  // Enums: user-defined types
  enum exams {MIDTERM1, MIDTERM2, FINAL, PROJECT};
  exams ex = MIDTERM1;
  std::cout << "Size of exams (" << sizeof(ex);
  std::cout << ")" << std::endl;
  std::cout << "Size of exams (" << sizeof(exams);
  std::cout << ")" << std::endl;
  return 0;
}
