#include<iostream> 
#include<vector> 


int main(){
    std::vector<int>numeros; 

    std::cout<<"---Limpar Vector ---"<<std::endl; 

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
   

    std::cout<<" Tamanho Antes: "<<numeros.size()<<std::endl; 
    numeros.clear();

    std::cout<<"Tamanho Depois: "<<numeros.size()<<std::endl; 
    std::cout<<"VEctor Vazio? "<<(numeros.empty() ? " Sim " : " Não ")<<std::endl; 
   

   
    
   
return 0; 
}

