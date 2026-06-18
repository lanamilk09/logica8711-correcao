#include<iostream>
#include<string>


struct Convocados{
  std::string nome, posição; 
  int numero; 
  
};
int  main(){

Convocados convocados[3];

std::cout<<"===== Convocação da seleção ======"<<std::endl;
std::cout<<std::endl; 


for(int i = 0; i < 3; i++){
  std::cout<<"Jogador"<<(i + 1)<<" : "<<std::endl;
  std::cout<<"nome: ";
  std::cin>>convocados[i].nome; 
  std::cout<<"Numero: ";
  std::cin>>convocados[i].numero;
  std::cout<<" posição: ";
  std::cin>>convocados[i].posição;

} 
std::cout<<"=====lista de convocados ====="<<std::endl;
std::cout<<std::endl; 

for(int i = 0; i < 3; i++){
  std::cout<<convocados[i].numero<<" - "<<convocados[i].nome<<"("<<convocados[i].posição<<")"<<std::endl; 

}
}