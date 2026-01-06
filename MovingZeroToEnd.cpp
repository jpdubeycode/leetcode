#include<iostream>
using namespace std;

int main(){

int arr[]={2,30,5,4,0,1,0};
int n=sizeof(arr)/sizeof(arr[1]);

int i=0;
for(int j=0;j<n;j++){
    if(arr[j]!=0){
        swap(arr[i++],arr[j]);
    }
}
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}

}