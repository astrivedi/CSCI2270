// program32.cpp
#include<iostream>
void foo();
int main(int argc, char* argv[])  {
  int v[] = {1, 2, 3, 4};
  int *p1 = v;
  int *p2 = &v[0];
  int *p3 = &v[2];
  
  return 0;
}

