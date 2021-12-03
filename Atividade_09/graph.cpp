#include <iostream>
#include "graph.h"
#include <cstddef>         // Para NULL.
#include <new>             // Para bad_alloc.

DistributionGraph::DistributionGraph(int max, int null_edge) {
  NULL_EDGE  = null_edge; 
  maxVertices = max;  
  numVertices = 0;
  vertices = new SupplyStation[maxVertices];
  marks = new bool[maxVertices];
  edges = new List[maxVertices];
}

DistributionGraph::~DistributionGraph() {
  delete [] vertices;
  delete [] marks;
  delete [] edges;
}

int DistributionGraph::getIndex(SupplyStation supplyStation) {
  int index = 0;
  while (!(supplyStation.getNome() == vertices[index].getNome())){
    index++;
  }
  return index;
}

void DistributionGraph::addSupplyStation(SupplyStation supplyStation){
  vertices[numVertices] = supplyStation;
  edges[numVertices] = List();
  numVertices++;
}

void DistributionGraph::addEdge(SupplyStation from,
		    SupplyStation to){
  int fromIndex = getIndex(from);
  int toIndex = getIndex(to);
  edges[fromIndex].insert(to);
}

void DistributionGraph::getAdjacents(SupplyStation supplyStation,
			 Queue &adjVertices){
  int fromIndex;
  int toIndex;
  fromIndex = getIndex(supplyStation);
  for (toIndex = 0; toIndex < numVertices; toIndex++)
    for (int j = 0; j < edges[toIndex].getLength(); j++)
      adjVertices.enqueue(edges[toIndex].getItem(j));
}

void DistributionGraph::clearMarks(){
  for (int i = 0; i < numVertices; i++)
    marks[i] = false;    
}
void DistributionGraph::markSupplyStation(SupplyStation supplyStation){
  int index = getIndex(supplyStation);
  marks[index] = true;
}
bool DistributionGraph::isMarked(SupplyStation supplyStation){
  int index = getIndex(supplyStation);
  return marks[index];  
}

void DistributionGraph::getPageRanks(float* pageRanks){
  // Computando graus de saída
  int* outputDegree = new int[numVertices];
  for (int i = 0; i < numVertices; i++) {
    outputDegree[i] = edges[i].getLength();
  }
  
  // Computando pageRanks.
  float* pr_previous = new float[numVertices];
  float* pr          = new float[numVertices];
  
  // Inicializando
  for (int i = 0; i < numVertices; i++) {
    pr_previous[i] = 1.0/numVertices;
  }

  float d = .85; 
  for (int numIter = 0; numIter < 50; numIter++){   
    // Passo Iterativo
    for (int i = 0; i< numVertices; i++){
      pr[i] = 0;
      for (int j = 0; j < edges[i].getLength(); j++){
          pr[i] += pr_previous[j]/outputDegree[j];
      }
      pr[i] = (1-d)/numVertices + d*pr[i];
    }
    for (int i = 0; i< numVertices; i++){
      pr_previous[i] = pr[i];
    }
  }

  for (int i = 0; i< numVertices; i++){
    pageRanks[i] = pr[i];
  }

  delete [] pr_previous;
  delete [] pr;
  delete [] outputDegree;
}

void DistributionGraph::printMatrix(){
  for (int i = 0; i < numVertices; i++) {
    std::cout << "Posto " << vertices[i].getNome() << " -> ";    
    for (int j = 0; j < edges[i].getLength(); j++) {
      std::cout << edges[i].getItem(j).getNome() << ",";
    }
    std::cout << std::endl;
  }
}
