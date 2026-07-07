#include<iostream> 
#include<vector> 


int main(){
    std::vector<int> numeros; 
    std::cout<<"Buscar Elemento: "<<std::endl; 
   

    
    numeros.push_back(100);
    numeros.push_back(200);
    numeros.push_back(300);
    numeros.push_back(400);
    //numeros.push_back(15);
    //numeros.push_back(5);
    //numeros.push_back(15);

    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    int buscado = 300; 
    int posicao = -1;

    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] == buscado){
            posicao = i; 
            break; 
        }
    }
    if(posicao != -1){
        std::cout<<"Número "<<buscado<<"Encontrado na posição: "<<posicao<<std::endl; 

    }else{
        std::cout<<"Numero não encontrado! "<<std::endl; 
    }

   
return 0; 
}

