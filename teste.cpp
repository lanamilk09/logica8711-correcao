#include<iostream> 
#include<vector> 


int main(){
    std::vector<int> numeros; 
    int quantidade; 
    std::cout<<"Adicionar do Usuario "<<std::endl; 

    std::cout<<"Quantos números? "<<std::endl; 
    std::cin>>quantidade; 

    for(int i = 0; i < quantidade; i++){
        int numero; 
        std::cout<<"Digite um numero: "<<(i + 1)<<": ";
        std::cin>>numero; 

        numeros.push_back(numero);
    }
return 0; 
}

