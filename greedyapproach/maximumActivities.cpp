#include<iostream>
#include<vector>
using namespace std;

int maxactivities(vector<int>start,vector<int>end){

    //sort on end time
    //A0 select
    int count=1;
    int currendtime=end[0];

    cout<<"Activity are:"<<endl<<"A0\n";
    for(int i=1;i<=start.size();i++){
        if(start[i]>=currendtime)//non-overlapping
        {
        cout<<"A"<<i<<endl;
            count++;
            currendtime=end[i];
    
        }
      
    }
    return count;

}

int main(){

    vector<int>start={1,3,0,5,8,5};
    vector<int>end={2,4,6,7,9,9};

cout<<maxactivities(start,end);

}