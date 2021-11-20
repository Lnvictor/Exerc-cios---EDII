#include <cstddef>         // Para NULL.
#include <new>             // Para bad_alloc.
#include "list.h"  
#include <iostream>

using namespace std;

List::List(){
  first = NULL;
  length = 0;
}

List::~List(){
  NodeType* tempPtr;
  while (first != NULL) {
      tempPtr = first;
      first = first->next;    
      delete tempPtr;
    }
}

int List::getLength(){
    return length;
}

bool List::isFull() const
{
  NodeType* location;
  try {
      location = new NodeType;
      delete location;
      return false;
  } catch(std::bad_alloc exception) {   
    return true;
  }
}

bool List::isEmpty() const
{
  return (first == NULL);
}

void List::insert(ItemType newItem)
{
  if (!isFull()) {
      NodeType* newNode;
      newNode = new NodeType;
      newNode->info = newItem;
      newNode->next = NULL;

      NodeType* tmpNode = first;

      if (first == NULL){
          first = newNode;
          length = 1;
          return;
      }

      for (int i = 0; i < length; i++){
        if (tmpNode->next == NULL){
            break;
        }
        tmpNode = tmpNode->next;
      }
      tmpNode->next = newNode;
      length++;
  } else {
    throw "List is already full!";           
  }
}

ItemType List::getItem(int index){
  if (!isEmpty()) {
    NodeType* tempPtr;
    tempPtr = first;
    ItemType item = first->info;     
    
    for (int i = 0; i < index; i++){
        tempPtr = tempPtr->next;
    }

    return tempPtr->info;

  } else {
    throw "List is empty!";
  }    
}

void List::print() const
{
  NodeType* tempPtr = first;
  while (tempPtr != NULL)
    {
      cout << tempPtr->info.getNome();
      tempPtr = tempPtr->next;
    }
  cout << endl;
}
