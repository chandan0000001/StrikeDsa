// 38. Pair With Given Difference


// You are given a one-dimensional unsorted array arr containing n integers and an integer diff . Find if there exists a pair of elements in the array whose absolute difference is exactly diff .
// Return 1 if any such pair exists, else return 0.
// Example 1:
// Input: arr = [-10, 20], diff = 30
// Output: 1
// Explanation:
// Pair (-10, 20) have an absolute difference of 30.
// Example 2:
// Input: arr = [5, 10, 3, 2, 50, 80], diff = 78
// Output: 1
// Explanation:
// Pair (2, 80) have an absolute difference of 78.
// Constraints:
// • 1 <= n <= 10^5
// • -10^9 <= arr[i] <= 10^9
// • 0 <= diff <= 10^9


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    arr = {5, 10, 3, 2, 50, 80};int diff=78;
    sort(arr.begin(),arr.end());
    int start=0;int end=0;int n=arr.size();
    while (start<=end&&end<n)
    {
        if(arr[end]-arr[start]==diff){
            return 1;
        }
        else if(arr[end]-arr[start]<diff){
            end++;
        }else{
            start++;
        }
    }
    return 0;
    
}