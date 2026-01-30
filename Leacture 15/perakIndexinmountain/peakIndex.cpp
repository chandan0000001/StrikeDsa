// You are given an integer mountain array arr of length n, where the values strictly increase to a peak element and then strictly decrease. Your task is to find and return the index of the peak element.
// put: arr = [3,7,10,14,17,19,21,19,14]
// Output: 6
// Explanation:
// The array strictly increases from 3 to 21 (at index 6), then strictly decreases from 21 to 14.
// The peak element is 21, which is at index 6.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    // arr={2,4,6,8,12,9,7,5,2};
    arr={10,20,30,40,5};
    int start=1,end=arr.size()-2 ;//boundry protection 
    ;int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            ans=mid;
            break;
        }else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<ans<<" ";

      return 0;
}