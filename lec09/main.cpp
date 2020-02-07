#include<iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};
int main() {

    Node* tmp = new Node();
    (*tmp).value = 20; 
    (*tmp).next=0;

    Node* tmp2 = new Node();
    tmp2->value = 30; 
    tmp2->next= tmp;

    Node* tmp3 = new Node();
    tmp3->value = 40; 
    tmp3->next= tmp2;

    Node* head = tmp3;
    while (head != 0) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;


    return 0;

}