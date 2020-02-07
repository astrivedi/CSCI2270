struct Node {
  int data;
  Node* next;
};

class LinkedList {
private:
  Node* head;
 
public:
  LinkedList();      /* Constructor */
  ~LinkedList();     /* Destructor */

  void traverse();         /* Traverse and print the list */ 
  Node* search(int val);    /* Search the list to find a value */
  void insertNode(Node* left, int value); /* Insert a node in the list */
  void deleteNode(Node* d_node); /* delete the node from the list*/
};
