#include <iostream>
#include<vector>
using namespace std;
//Two Pointer approace
vector<int> pairSum(vector<int>&arr,int size){
    int  start=0;
    int end=size-1;
    int target=9;
    int currsum=0;
    vector<int>ans;
    while(start<end){
      currsum=arr[start]+arr[end];
        if(currsum==target){
            ans.push_back(start);
            ans.push_back(end);
          return ans;
        }
        else if(currsum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return ans;

}


int main(){

vector<int>arr={2,7,8,15};
int size=arr.size();
vector<int> ans=pairSum(arr,size);

cout<<ans[0]<<","<<ans[1];
}


/*
 // Brute force Time complexity O(n^2)
int main()
{
    
    int a[] = {1, 8, 1, 15};
    int target = 9;
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++){
            if (a[i] + a[j] == target) {
                cout << i << "," << j;
                cout << endl;
            }
        }
    }
}
*/