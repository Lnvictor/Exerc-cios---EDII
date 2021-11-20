#include "graph.h"
#include <iostream>

int main() {
  DistributionGraph graph;
  SupplyStation a = SupplyStation("A"); graph.addSupplyStation(a);
  SupplyStation b = SupplyStation("B"); graph.addSupplyStation(b);
  SupplyStation c = SupplyStation("C"); graph.addSupplyStation(c);
  SupplyStation d = SupplyStation("D"); graph.addSupplyStation(d);
  SupplyStation e = SupplyStation("E"); graph.addSupplyStation(e);
  
  graph.addEdge(a, b);
  graph.addEdge(a, c);
  graph.addEdge(a, e);
  graph.addEdge(b, c);
  graph.addEdge(b, d);
  graph.addEdge(b, e);
  graph.addEdge(c, e);
  graph.addEdge(d, e);

  graph.printMatrix(); 
  std::cout << std::endl;
}
