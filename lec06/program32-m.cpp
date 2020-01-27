// program32-m.cpp
#include<iostream>
#include<cassert>
void foo();
int main(int argc, char* argv[])  {
  int v[] = {1, 2, 3, 4};
  int *p1 = v; // v is a point to the 0-th element of the vector v
  int *p2 = v+1; // v+i is a point to the i-th element of the vector v
  int p3 = v[2]; 
  int p4 = *(v+2); // v[i] is a shorthand for  *(v+i)

  assert(p3 == p4 && "this should never execute");

  return 0;
}

