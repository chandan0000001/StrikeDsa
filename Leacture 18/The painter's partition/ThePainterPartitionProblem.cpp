//  The Painter's Partition Problem
// You are given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available.
// Each painter takes 1 unit of time to paint 1 unit length of a board.
// Your task is to determine the minimum amount of time required to paint all the boards, under the constraint that each painter can paint only a contiguous sequence of boards.
// The goal is to distribute the boards among painters such that the maximum time taken by any painter is minimized.
// Example 1:
// Input: arr = [5, 10, 30, 20, 15], k = 3
// Output: 35
// Explanation:
// The optimal allocation of boards among 3 painters is -
// Painter 1 → [5, 10] → time = 15
// Painter 2 → [30] → time = 30
// Painter 3 → [20, 15] → time = 35
// Job will be done when all painters finish i.
// 
// at time = max(15, 30, 35) = 35
// Example 2:
// Input: arr = [10, 20, 30, 40], k = 2
// Output: 60
// Explanation:
// A valid optimal partition is -
// Painter 1 → [10, 20, 30] → time = 60
// Painter 2 → [40] → time = 40
// Job will be complete at time = max(60, 40) = 60
// Constraints:
// • 1 ≤ arr.length ≤ 10^5
// • 1 ≤ arr[i] ≤ 10^5
// • 1 ≤ k ≤ 10^5




#include<iostream>
#include<vector>
using namespace std;
bool isPaintingPossible(int maxPaint , vector<int>& arr,int k){

    int count = 1,paint=arr[0],n=arr.size();
    for(int i=1;i<n;i++){
        paint+=arr[i];
        if(paint>maxPaint){
            count++;
            paint=arr[i];
        }
    }
    return count<=k;
}

int main(){
cout<<"Wealcome to the  The Painter's Partition Problem "<<endl;
 vector<int>arr;
    arr={10, 20, 30, 40};
     int k;
    cout<<"Enter the value for  K: ";
    cin>>k;
    int n = arr.size();
    int start=0,end=0,ans=-1;
    for(int i=0;i<n;i++){
        start=max(start,arr[i]);
        end+=arr[i];
    }
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        //mid >> maxPaint
        if(isPaintingPossible(mid,arr,k)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    // return ans;

    cout<<"Paintig possible:  "<<ans<<endl;
    cout<<endl;
    

    return 0;
}


