#include <iostream>
#include "hash.h" 

using namespace std;

int main(){
  Hash alunosHash(11);
   int hashes[5]   = {41, 48, 19, 12, 30};
  string nomes[5] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas"}; 
	    
  for (int i = 0; i < 5; i++) {
    Aluno aluno = Aluno(hashes[i], nomes[i]);
    alunosHash.insertItem(aluno);
  }
  
  cout << "------------------------------" <<  endl;
  alunosHash.print();

  cout << "------------------------------" <<  endl;
  
  Aluno aluno(19,"Paulo");  
  alunosHash.deleteItem(aluno);
  alunosHash.print();
  cout << "Fim" << endl;  
}
