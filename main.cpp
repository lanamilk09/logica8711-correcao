#include <iostream>
#include <string>

int main(){
 //br]Amount: valor em reais ExchangeRate: Taxa de Câmbio usdAmount: Valor em dólares
 double brlAmount, exchangeRate, usdAmount;

int choice;//choice: escolha

std::cout<<"--- Currency Converter: BRL to USD---"<<std::endl;

std::cout<<"Enter the current exchange rate (how much is 1 dolar in Reais?): "<<std::endl;
std::cin>>exchangeRate;

std::cout<<"Enterthe amount in BRL(R$):"<<std::endl;
std::cin>>brlAmount;

if(brlAmount > 0 ){
   usdAmount = brlAmount / exchangeRate;
   std::cout<<"You will have $"<<usdAmount<<" US dollars. "<<std::endl;


}


    return 0;
 }