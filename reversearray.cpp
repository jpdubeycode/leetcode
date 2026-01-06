#include<iostream>
#include<vector>
using namespace std;

//void reversearray(int a[],int n){
vector<int> reversearray(vector<int>&a,int n){
    int start=0,end=n-1;
   
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }

   
// for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";}
return a;

}


int main(){

// int a[]={2,4,5,6,8};
// int n=sizeof(a)/sizeof(a[0]);
vector<int>a={2,4,5,6,8};
int n=a.size();

// for(int i=n-1;i>=0;i--){
//     cout<<a[i]<<" ";
// }
vector<int>result=reversearray(a,n);

for(int i :result){
    cout<<i<<" ";

}

}