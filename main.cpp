#include<iostream>
#include<string>
int main(){

 std::string nome;
 int idade;
 int anoAtual = 2026;
 int result;

 std::cout<<" Qual seu nome? "<<std::endl; 
 std::cin>>nome;
 std::cout<<" Qual sua idade? "<<std::endl; 
 std::cin>>idade; 

 result = anoAtual - idade; 
 std::cout<<result<<std::endl;

 std::cout<<"olá"<<nome<<"!!"<<std::endl;
 std::cout<<"você tem"<<idade<<"anos"<<std::endl;
 std::cout<<"você nasceu no ano"<<result; 


    return 0; 

}

