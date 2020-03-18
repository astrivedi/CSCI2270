#pragma once /* include this file at most  once */

#define COUNT 10

enum Color {Red, Black}; // Discuss 2)

struct Node {
  int key;          /* key of the node */
  Color color;      /* color of the node */
  Node* left;   /* initialized the left sub-tree to Null */
  Node* right;  /* initialized the right sub-tree to Null */
  Node* parent; /* parent of the node: Discuss 3) */  

  Node() {key = -1; left = 0; right = 0;}
  Node(int k) {key = k; left = 0; right = 0;}
  Node(int k, Color c) {key = k; left = 0; right = 0; color = c;}
  Node(int k, Color c, Node* l, Node* r) {key = k; left = l; right = r; color =c;}
  Node(int k, Color c, Node* l, Node* r, Node* p) {key = k; left = l; right = r; color =c; parent = p;}

};


class RBT {
private:
  Node* root; /* Root of the Binary Search Tree */
  
public:
  RBT();  /* Constructor */
  ~RBT(); /* Destructor */

  void insert(int val);   /* insert the value val in the RBT, drop the duplicates */
  Node* search(int k);  /* Search if value k is in the RBT, Retun a pointer if yes, and 0 otherwise. (drop equal values) */
  
  Node* getMin(); /* get a pointer to the node with minimum key */
  Node* getMax(); /* get a pointer to the node with maximum key */

  int size(); /* Return number of the ndoes in the RBT */
  void prettyPrint(); /* pretty print the RBT */
  
  void inOrder(); /* in-order traversal */ 
  void preOrder(); /* pre-order traversal */
  void postOrder(); /* post-order traversal */
  
  int getSum(); /* sum of the elements in the RBT */

  void remove(int val);  /* remove the value val in the RBT */

  void rotateLeft();
  void rotateRight();

  void rotateLeft(Node* &node);
  void rotateRight(Node* &node);

  
private:
  /* helper functions */
  
  void insert(Node* &T, Node* p, int val);
// Node* insert(Node* T, Node* p, int val); // another style of recursive functions 1). Discuss:


  void remove(Node* &T, Node* p, int val);  
  int getSum(Node* T);
  void recursive_destruct(Node* T);  
  Node* getMin(Node* T);
  Node* getMax(Node* T);  
  void inOrder(Node* T);
  void preOrder(Node* T);
  void postOrder(Node* T);
  int size(Node* T);  
  Node* search(Node* T, int val);
  void prettyPrint(Node* T, int space);
};

