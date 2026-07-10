#include<iostream>  

 

int main(){  

    int nota; 

 

    while (true){ 

        std::cout<<"Digite um numero de 0 a 10: "<<std::endl; 

        std::cin>>nota; 

        if(nota >= 0 && nota <=10) 

        std::cout<<"Nota: "<< nota <<" Registrada "<<std::endl; 

        else{ 

            std::cout<<"Nota não registrada"<<std::endl; 

        } 

 

return 0; 

    } 

     

} 