#include<iostream>
using namespace std;

void mergearray(int a[],int n,int b[],int m,int c[]){

int i=0,j=0,k=0;
while(i<n&&j<m){
    if(a[i]<b[j]){
       c[k++]= a[i++];
    }
    else{
       c[k++]= b[j++];
    }
}
while(i<n){
    c[k++]= a[i++];
}
while(j<m){
    c[k++]= b[j++];
}
for(int x=0;x<k;x++){
cout<<c[x]<<" ";
}
}

int main(){

int a[]={2,4,6,7,8};
int b[]={3,5,9};
int n,m;
n=sizeof(a)/sizeof(a[0]);
m=sizeof(b)/sizeof(b[0]);
int c[m+n];
mergesort(a,n,b,m,c);

}
