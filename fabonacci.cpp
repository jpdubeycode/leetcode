#include<iostream>
using namespace std;

int main(){
    int range;
    cout<<"Enter range of series ";
    cin>>range;
    int f0=0;
    int f1=1;
    int f2;

    for(int i=0;i<range;i++){
         cout<<f0<<",";
         f2=f0+f1;
         f0=f1;
         f1=f2;
         
    }
    
}