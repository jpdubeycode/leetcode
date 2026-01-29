#include<iostream>
#include<vector>
using namespace std;

double Sortedarray(int a[],int b[],int n,int m){
int l=n+m;
    int c[l];
int i=0,j=0,k=0;
while(i<n && j<m){

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

if(l%2==1){
    return c[l/2];
}
else{
    return  (c[l/2]+c[(l/2 )+ 1])/2.0;
}
     
}

int main(){

    int a[]={1,2};
    int b[]={3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

   cout<< Sortedarray(a,b,n,m);

    return 0;

}