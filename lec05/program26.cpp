// program26.cpp
#include<iostream>
void foo(int num);
int main(int argc, char* argv[])  {
  if (argc==2) foo(atoi(argv[1]));
  return 0;
}
void foo(int num)
{
  if (num > 0) foo(num-1);
}
