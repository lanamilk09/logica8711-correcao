#include<iostream>
#include<thread> // para lidar com o tempo de execução
#include<chrono>// para definir unidades de tempo (m/s segundos)


int main(){


   for(int i = 10; i >= 0; i--){
// <= 10 - o sistema vai parar de somar quando chegar a 10
    std::cout<<" a bomba irá explodir em..."<<i<<std::endl; 

   
   std::this_thread::sleep_for(std::chrono::milliseconds(5000));

   // define em quanto tempo a contagem irá diminuindo, tipo 3 segundo para ir de 10 a 9 na contagem 
   

   }
   
    return 0;
}