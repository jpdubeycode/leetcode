#include<iostream>
using namespace std;

int main(){

    //int a[]={5,5,5,5,5};
    int a[]={5,3,6,32,76,45};
    int n=sizeof(a)/sizeof(a[0]);

    int largest=a[0];

    int secondlargest=INT32_MIN;

    for(int i=1; i<n ;i++){
    
     if(a[i]>largest){
        secondlargest=largest;
        largest=a[i];

     }
      else if(a[i]<largest && a[i]>secondlargest){
        secondlargest=a[i];
      }

    }

 cout<<"secondlargest element is "<<secondlargest;


}

