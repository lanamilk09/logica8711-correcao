#include<iostream>
#include<string> 
int main(){

  std::string nome;
  std::string sobrenome = " Milk "; 

  std::cout<<" digite seu nome: "<<std::endl;
  std::cin>>nome; 

  std::cout<<nome.append(sobrenome); 

    return 0; 

}

