#ifndef GRAPH_H 
#define GRAPH_H 

#include "queue.h"
#include "list.h"

class DistributionGraph {  
 private:  
  int NULL_EDGE; // Constante para aresta nula.
  int maxVertices; // Número máximo de vértices.  
  int numVertices; // Número de vértices adicionados.
  SupplyStation* vertices; // Array com todos os vértices.
  List* edges; // Listas adjacentes
  bool* marks; // marks[i] marca se vertices[i] foi usado.
  int getIndex(SupplyStation);
 public:
  DistributionGraph(int max = 50, int null = 0);  // construtor
  ~DistributionGraph(); // destrutor

  void addSupplyStation(SupplyStation);
  void addEdge(SupplyStation, SupplyStation);

  // int getWeight(Vertex, Vertex);

  void getAdjacents(SupplyStation, Queue&);
  void clearMarks();
  void markSupplyStation(SupplyStation);
  bool isMarked(SupplyStation);
  void printMatrix();
};

#endif
