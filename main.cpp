#include <iostream>

int main(){
 int mynumbers[5] = {10, 20, 30, 40, 50,};
// for(int num : mynumbers){
     // std::cout<<num<<std::endl;
     for(int i = 0; i < 5; ++i){
        std::cout<<mynumbers[i]<<std::endl;
        // quando o i = 0 ele puxa o 10, quando o i se torna 1 ele puxa o 20, quando o i se torna 2 ele puxa o 30
        


     }
 
    

    return 0;
 }