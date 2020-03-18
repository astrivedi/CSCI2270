#include <iostream>
#include <vector>
using namespace std;


int main() {
vector<int> vec;
int A[5] = {11,22,33,44,55};

for (int i = 0; i < 5; ++i) {
    vec.push_back(A[i]);
}

for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
    cout << *it << " ";
}
cout << vec.capacity();



return 0;
}