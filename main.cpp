#include <iostream>
#include <string>

int main(){
 int num;

int totalseconds;
std::cout<<"Enter total seconds: "<<std::endl;
std::cin>>totalseconds;
int minutes = totalseconds /60;
int seconds = totalseconds %60;

std::cout<<"Time: "<<minutes<<" minutes and "<<seconds<<" seconds."<<std::endl;

    return 0;
 }