// program6.cpp 
#include<iostream>
int main(int argc, char* argv[])
{
  enum exams {MIDTERM1, MIDTERM2, FINAL, PROJECT};
  exams ex1 = (exams) atoi(argv[1]);
  switch (ex1) {
  case MIDTERM1:
  case MIDTERM2:
    std::cout << "Can improve the grades with finals!";
    break;
  case FINAL:
  case PROJECT:
    std::cout << "Sorry! You cannot improve!";
    break;
  }
  return 0;
}
