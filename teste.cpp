#include<iostream>

int main(){
  int fila[10];
  int inicio = 0; 
  int fim = 0; 
  int topo = -1; 
  int opcao; 
  std::cout<<"==== Fila com Menu ======"<<std::endl; 
  while(true){
    std::cout<<std::endl; 
    std::cout<<"1.Empilhar"<<std::endl; 
    std::cout<<"2.Desempilhar"<<std::endl; 
    std::cout<<"3. Exibir pilha"<<std::endl; 
    std::cout<<"Sair"<<std::endl; 

    std::cout<<"Escolha: "<<std::endl; 
    std::cin>>opcao; 


    if(opcao ==1){
      if(fim < 10){
        int valor; 
        std::cout<<"Digite o valor: ";
        std::cin>>valor; 
        fila[fim] = valor; 
        fim++; 
        std::cout<<"Enfileirado!"<<std::endl;

      }else{
        std::cout<<"Fila Cheia!! "<<std::endl; 

      }
    }else if (opcao == 2){
      if(inicio < fim){
        std::cout<<"Removido: "<<std::endl; 
        inicio++; 
      }else{
        std::cout<<"Fila VAzia! "<<std::endl; 
      }

    } else if(opcao == 3){
      if(inicio < fim){
        std::cout<<"Fila: ";
        for(int i = inicio; i < fim; i++){
          std::cout<<fila[i]<<" "; 

        }
        std::cout<<std::endl; 
      }else{
        std::cout<<"Fila Vazia! "<<std::endl; 
      }
    }
    else if(opcao == 4){
      std::cout<<"Saindo..."<<std::endl; 
      break;
    }
}
  
  return 0; 
  }

 