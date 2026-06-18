#include<iostream>


int main(){
  int jogos; 

  std::cout<<"==== Calculador de publico ======"<<std::endl; 
  std::cout<<std::endl; 

  std::cout<<"Quantos Jogos? ";
  std::cin>>jogos; 

  int somaPublico = 0; 

  for(int i = 1; i <= jogos; i++ ){
    int publico; 
    std::cout<<"publico jogo"<<i<<": ";
    std::cin>>publico; 
    somaPublico += publico; 

  }
  int media = somaPublico / jogos; 
  std::cout<<std::endl; 
  std::cout<<"==== Resultado ======"<<std::endl; 
  std::cout<<" media de publico: "<<media<<" pessoas"<<std::endl; 
  std::cout<<"total de publico: "<<somaPublico<<" pessoas "<<std::endl; 

  return 0; 
}

