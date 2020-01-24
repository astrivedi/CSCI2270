#include<iostream>
using namespace std;

int rec_fun(int x);

int main() {
  cout << rec_fun(20);
}

int rec_fun(int x) {
  if (x < 819200)
  return rec_fun(x+1);
  else return 0;
}
