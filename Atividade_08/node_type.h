#ifndef NODETYPE_H 
#define NODETYPE_H 

#include "supply_station.h"

typedef SupplyStation ItemType;

struct NodeType
{
  ItemType info;
  NodeType* next;
};

#endif
