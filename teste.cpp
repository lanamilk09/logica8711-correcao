#include<iostream>

struct pessoa{
  std::string nome ; 
  int idade ; 
  float altura; 
}; 
int main(){
   
 pessoa p1 = { "Junior ", 20, 1.80};
 pessoa p2 = {"Carlos", 30, 1.70};

 std::cout<<p2.nome<<" tem "<<p2.idade<<" anos e "<<p2.altura<<" de altura "<<std::endl; 
  
  return 0; 
}

