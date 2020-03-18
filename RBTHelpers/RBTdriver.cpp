#include<iostream>
#include "RBT.hpp"

using namespace std;

int main() {
  RBT T;
  int data[10] = {11, 2, 33, 4, 55, 6, 77, -10, 38, 67};
  //int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // int data[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  
  for (int i = 0; i < 10; i++)   {
   // cout << "inserting " << data[i] << endl;
   // getchar();
    /* 0. Implement an insert in the tree */
    T.insert(data[i]);
    //T.prettyPrint();
    
    //getchar();
   // cout << " ================================ " << endl;
  }
  T.prettyPrint();

  /* 1. First implement search in a RBT */
  
  //if (T.search(33) != 0) cout << "33 is in the tree" <<endl;
  //else cout << "33 is not in the tree" << endl;

  //if (T.search(23) != 0) cout << "23 is in the tree" <<endl;
  //else cout << "23 is not in the tree" << endl;

  /* 2. Implement Size for RBT */
 //cout << "size of the tree is " << T.size() <<endl;


   /* 3. Implement in-order traversal for RBT */
  // T.inOrder();
  //cout<<endl;
  /* 4. Implement pre-order traversal for RBT */
  // T.preOrder();
  // cout<<endl;
  /* 5. Implement post-order traversal for RBT */
  // T.postOrder();
  // cout<<endl;
   
   /* 6. Implement function to compute minimum value in a RBT */
   /* Function getMin should return a pointer to the node with smallest value */

   //if (T.getMin() != 0)
    //cout << "minimum value in the tree is " << T.getMin()->key << endl;
   
   /* 7. Implement function to compute maximum value in a RBT */
   /* Function getMax should return a pointer to the node with largest value */
  // if (T.getMax() != 0)
  //cout << "maximum value in the tree is " << T.getMax()->key << endl;
   
   /* 8. Implement a function to sum all values in RBT */
  // cout << "sum of value in the tree is " << T.getSum() << endl;
   
   /* 10. Implement recursive"remove" */
  //for (int i = 0; i < 10; i++)   {
    //cout << "==========================" << endl;
    //cout << "removing " << data[i] << endl;
    //getchar();
    // T.remove(data[i]);
    // T.prettyPrint();
 // }

 //T.prettyPrint();
 cout << "==============================="<<endl;
 T.rotateRight();
 //T.inOrder();
 T.rotateLeft();
 T.prettyPrint();
 //T.inOrder();
}
