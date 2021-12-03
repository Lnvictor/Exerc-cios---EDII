#ifndef SUPPLY_STATION_H
#define SUPPLY_STATION_H

#include <iostream>

class SupplyStation {
 public:
  SupplyStation(){
    this->nome = nome;
  }
  SupplyStation(std::string nome){
    this->nome  = nome;
  }
  std::string getNome() const {
    return nome;    
  }  
 private :
  std::string nome;
};

#endif
