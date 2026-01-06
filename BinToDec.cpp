#include<iostream>
using namespace std;

void BinToDec(int bin){

int n=bin;
int lastdig;
int dec=0;
int pow=1;//2^0 2^1 2^2....

while(n>0){
int lastdig=n%10;

dec=dec+lastdig*pow;
pow=pow*2;
n=n/10;

}
cout<<"Decimal of "<<bin<<"="<<dec;

}


void DecToBin(int dec){
    int n=dec;
    int rem;
    int bin=0;
    int pow=1;//10^0 10^1 10^2
    while(n>0){

        rem=n%2;
        bin=bin+pow*rem;
        pow=pow*10;
        n=n/2;
    }

    cout<<"Binary of "<<dec<<"="<<bin;

}

int main(){

     BinToDec(111);
     cout<<endl;

     DecToBin(7);



}