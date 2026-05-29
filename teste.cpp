#include<iostream>
void tabuada(int numero, int multiplicador){
  if(multiplicador == 0){
    return; 
  }
  tabuada(numero,multiplicador - 1);
  std::cout<<numero<<"x"<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;
}
int main(){
  int numero; 
  int multiplicador; 
std::cout<<" Digite um numero: "<<std::endl;
std::cin>>numero; 

std::cout<<" Digite um valor para o multiplicador: "<<std::endl; 
std::cin>>multiplicador; 

tabuada(numero,multiplicador);

 

}