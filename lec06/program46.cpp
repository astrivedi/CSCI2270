// program46.cpp 
#include<iostream>
#include<string>

/* Class Declaration */
class List {
private:
  std::string list[1000];
  int size;
  int capacity;
  
public:
  List(); // Constructor 
  ~List(); // Destructor
  void insert(std::string data);
  int get_size(); 
  int get_capacity();
  bool is_empty();
  void pretty_print();
};

/* Class Definition */
List::List() {
  size = 0;
  capacity = 1000;
}

List::~List() {
}

void List::insert(std::string data) {
  if (size < capacity) {
    list[size] = data;
    size = size + 1;
  }
  else {
    throw "List capacity reached";
  }
}
int List::get_size() {
  return size;
}

int List::get_capacity() {
  return capacity;
}

bool List::is_empty() {
  return capacity;
}

void List::pretty_print() {
  std::cout << "[ ";
  for (int i = 0; i < size-1; i++) {
    std::cout << list[i] << ", ";
  }
  std::cout <<  list[size-1] <<"]" << std::endl;
}

int main(int argc, char* argv[])
{
  List addresses;
  addresses.insert("Boulder");
  addresses.insert("Erie");
  addresses.insert("Louisville");
  {
    List names;
    names.insert("Ashutosh");
    names.insert("Maciej");
    names.insert("Shayon");

    names.pretty_print();
  }
  addresses.pretty_print();
  
  return 0;
}


