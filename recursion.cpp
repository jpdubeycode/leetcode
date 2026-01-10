// #include<iostream>
// using namespace std;

// int factorial(int num){
//     if(num==0)
//     return 1 ;
     
    
//     return num*factorial(num-1);
// }
// int main(){

//     int num;
//     cin>>num;
//     cout<<factorial(num);
// }


// #include<iostream>
// using namespace std;

// void print(int num){
//     if(num==0)
//     return;
     
//     cout<<num<<endl;
//     print(num-1);
    
// }
// int main(){

//     int num;
//     cin>>num;
//     print(num);
// }


// #include<iostream>
// using namespace std;

// int  SumNaturalno(int num){
//     if(num==0)
//     return 0;
    
//     return num+SumNaturalno(num-1);
    
// }
// int main(){

//     int num;
//     cin>>num;
//    cout<<SumNaturalno(num);
// }




// #include<iostream>
// using namespace std;

// int  fibonacci(int num){
//     if(num==0||num==1)
//     return num;
    
//     return fibonacci(num-1)+fibonacci(num-2);
  
  
    
// }
// int main(){

//     int num;
//     cin>>num;
//    cout<<fibonacci(num);

// }



#include<iostream>
using namespace std;

bool isSorted(int a[],int num,int i){

if(i==num-1)
return true;

if(a[i]>a[i+1]){
    return false;
}

return isSorted(a,num,i+1);
}  


int main(){

  int a[5]={1,2,3,4,5};
  int b[5]={1,3,4,2,5};
cout<<isSorted(b,5,0);
}