#include<iostream>
using namespace std;

int main(){

  
int n=5; // given
int array[n]={1,3,5,4}; // given


//gauss method
int sum=(n*(n+1))/2;
int actual=0;
for(int i=0;i<n;i++){
    actual=actual+array[i];

}

int missing=sum-actual;

cout<<missing;

}