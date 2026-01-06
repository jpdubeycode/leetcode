#include<iostream>
#include<vector>
using namespace std;

int maximum_sum_subarray(vector<int>&v,int n){

 int sum=0;
    int maxi=INT32_MIN;

    for(int i=0;i<n;i++){
        sum=sum+v[i];


     if(sum>maxi){
        maxi=sum;
     }
        if(sum<0){
            sum=0;
        }
     
    }
    return maxi;

}

int main(){
  //  vector<int>v={3,4,-5,6,-3,-1,-2,4,3,2,1};
    vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
int n=v.size();

    cout<<maximum_sum_subarray(v,n);
}