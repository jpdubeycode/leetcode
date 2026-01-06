#include<iostream>
using namespace std;


int main(){

int a[]={1,2,3,7,5};
int n=sizeof(a)/sizeof(a[1]);

int target=12;
int sum=0;
int index=0;

for(int i=1;i<=n;i++){
    sum=sum+a[i];
 // index++;

    if(sum==target){
      break;
    }
}

cout<<"target is found"<<target;

}