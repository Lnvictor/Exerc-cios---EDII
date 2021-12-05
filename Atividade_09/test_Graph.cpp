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
  graph.addEdge(c, a);
  graph.addEdge(d, e);
  graph.addEdge(d, b);
  graph.addEdge(e, a);

  graph.printMatrix(); 
  
  float *pages = new float[5];

  graph.getPageRanks(pages);

  
  std::cout << "\n\n-------page rank----------\n\n";
  for (int i = 0; i < 5; i++){
    std::cout << "Posto: "<< (char )(97 + i) << " --> PageRank: "<< pages[i] << "\n";
  }
  
  std::cout << std::endl;
}
