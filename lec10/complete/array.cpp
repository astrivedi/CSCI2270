#include<iostream>
using namespace std;
// Fun with Array Doubling

//passing array normally 
void double1(int* A, int size);

//passing array by Reference 
void double2(int* &A, int size);

//passing array by pointer
void double3(int* *A, int size);

int main() {
    int* A = new int[2];
    A[0] = 22;
    A[1] = 33;
 
    cout << "Address of A (before):" << A << endl;
    //double1(A, 2);
    // double2(A, 2);
    double3(&A, 2);
    cout << "Address of A (after):" << A << endl;

    for (int i=0; i<4; i++) cout << A[i] << " ";
    cout << endl;
    
    return 0;
}

void double1(int* A, int size) {
    int* B = new int[2*size];
    cout << "Address of B:" << B << endl;

    for (int i=0; i < size; i++) B[i] = A[i];

    delete[] A;
    A = B;

    return;
}

void double2(int* &A, int size) {
    int* B = new int[2*size];
    cout << "Address of B:" << B << endl;

    for (int i=0; i < size; i++) B[i] = A[i];

    delete[] A;
    A = B;

    return;
}
void double3(int* *A, int size) {
    int* B = new int[2*size];
    cout << "Address of B:" << B << endl;
    
    for (int i=0; i < size; i++) B[i] = (*A)[i];
    
    delete[] *A;
    *A = B;

    return;
}