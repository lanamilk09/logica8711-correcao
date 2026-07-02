#include<iostream> 
#include<vector> 


int main(){
    std::vector<int>numeros; 

    std::cout<<"--- 2. Tamanho do Vector ---"<<std::endl; 
    std::cout<<std::endl; 
    
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15); 

    std::cout<<"Tamanho do Vector: "<<numeros.size()<<std::endl;
    std::cout<<"Elementtos: "; 
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<std::endl; 
    } 

return 0; 
}

