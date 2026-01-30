//You are given a non-negative integer x. Your task is to compute and return the square root of x, rounded down to the nearest  integer.The returned integer should be non-negative. You must not use any built-in exponent function or operator (such as pow() or **) to solve this problem.

// Input: x = 4
// Output: 2
//input: = 7
// output: 
#include<iostream>
using namespace std;
int mysqrt(int x){
    int start=0,end=x,ans=-1;
    while (start<=end){
        int mid = start+(end-start)/2;
        if(mid==x/mid){
            return mid;  //perfect square
            
        }else if(mid<x/mid){
            ans=mid;  //posible square
            start=mid+1;
        }else{
            
            end=mid-1;
        
    }
 }
 return ans;
}
int main(){
    int n;
    cout<<"Enter a number for determine the sqrt: ";
    cin>>n;
    // mysqrt(n);
    cout<<mysqrt(n);
    cout<<endl;
    return 0;
}