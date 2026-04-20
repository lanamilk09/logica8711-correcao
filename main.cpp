#include <iostream>
#include<string>


int main(){

std::string nomes[3] = { "Joao", "Paula", "Murilo"};
int idades[3] = {27, 31, 20};

std::cout<<nomes[1]<<" tem "<<idades[1]<<" anos! "<<std::endl;
std::cout<<nomes[2]<<" possui "<<idades[2]<<" anos! "<<std::endl;
std::cout<<nomes[0]<<" disse que tem "<<idades[0]<<" anos de idade! "<<std::endl;


    return 0;
 }