#include<iostream>
using namespace std;
//sum of the array using recurision 

//
int sumOfArray(int arr[],int index,int n){
    //base condition 
    if(index==n){return 0;}
    //here n = size of an array
    int ans = arr[index]+sumOfArray(arr,index+1,n);
    return ans ;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int sumArray=sumOfArray(arr,0,5);
  
    cout<<sumArray<<endl;
   
    return 0;
}