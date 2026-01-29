#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>v(n,0);
n=v.size();
for(int i=0;i<n;i++){
 cin>>v[i];
}
vector<int>a;

v[n-1]++;
for(int i=0;i<n;i++){
    cout<<v[i];
}


}