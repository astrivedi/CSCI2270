#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
    bool flag = true;
    unsigned int x = 22;
    char ch = 'a';
    float fl = 2e33;
    double dl = 1e100;

//    cout << "x = " << x << " ch = " << ch << " fl = " << fl << " dl = " << dl << endl;
    cout << "s(flag) = " << sizeof(flag) << "s(x) = " << sizeof(x) << " s(ch) = " << sizeof(ch) << " s(fl) = " << sizeof(fl) << " dl = " << sizeof(dl) << endl;
    
    return 0;
}