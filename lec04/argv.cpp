#include<iostream>
using namespace std;

int N = 0;
int* test() {
  int A[10000];

  
  for (int i = 0; i < 5; i++) {
    //    cout <<  &A[i] << " : " << A[i] << endl;
  }

  if (N++ < 5) cout << dec<< test() << endl;

  return A;
}

int main(int argc, char* argv[]) {
  // cout << argc << argv[10] << endl;

  // int A[5];
  // for (int i = 0; i <1000; i++) {
  //   cout <<  &A[i] << " : " << A[i] << endl;
  // }

  cout << dec << test() << endl;
  // int* A;
  // A = new int[20];
  // for (int i = 0; i <1000; i++) {
  //   cout <<  &A[i] << " : " << A[i] << endl;
  // }
  
  return 0;
}
