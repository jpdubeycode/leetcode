#include<iostream>
using namespace std;

//for 2XN boundary of 2X1 tile

int TilingP(int num){

    if(num==0 || num==1){
        return 1;
    }
return TilingP(num-1)+TilingP(num-2);

}

int main(){

int num;
cout<<"Enter value of ";
cin>>num;

cout<<TilingP(num);


}