#include<iostream>
using namespace std;

void mergearray(int a[],int b[],int n,int m){
    int l;
    l=n+m;
    int c[l];

   int i=0,j=0,k=0;
while(i<n&&j<m){
        if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else{
             c[k++]=a[i++];
        }
        
    }
    while(i<n){
         c[k++]=a[i++];
    }
    while(j<m){
         c[k++]=b[j++];
    }
   for(int i=0;i<l;i++){
    cout<<c[i]<<" ";
   }

}


int main(){

int a[]={3,6,8,9};
int b[]={2,5,7,10};
int n=sizeof(a)/sizeof(a[1]);
int m=sizeof(b)/sizeof(b[1]);

 mergearray(a,b,n,m);

}