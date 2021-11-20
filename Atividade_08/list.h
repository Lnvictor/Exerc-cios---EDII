#ifndef LIST_H
#define LIST_H 

#include "node_type.h"

class List
{ 
 public:
  List(); // Constructor
  ~List(); // Destrutor  
  bool isEmpty() const;
  bool isFull() const;
  void print() const;
  
  void insert(ItemType);
  ItemType getItem(int);
  int getLength();
 private:
  NodeType* first;
  int length;
};

#endif