#include <iostream>
#include <string>

int doublegame (int x){
return x * 2;

    
    }
    int main(){
       for(int i = 1; i <= 5; i++){
        std::cout<< " O dobro de "<<i<<" é "<<doublegame(i)<<std::endl;
        
       }


    return 0;
 }