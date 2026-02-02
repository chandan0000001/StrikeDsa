// 19. Kth Missing Positive Number
// You are given an array arr of positive integers sorted in strictly increasing order, and an integer k. Your task is to find the kth positive integer that is missing from this array.
// The array contains some positive integers in sorted order, but not all consecutive positive integers are present. You need to identify the missing positive integers and return the kth one.

// Example 1:
// Input: arr = [10,20,30] k = 15
// Output: 16
// Explanation:
// The array starts at 10, so positive integers 1 through 9 are missing (9 numbers).
// After 10, numbers 11-19 are missing (9 more numbers).
// So far we have 9 + 9 = 18 missing numbers before reaching 20.
// The 15th missing number falls within this range, specifically at position 15, which is the number 16.
// ​
// Example 2:
// Input: arr = [1,2,3,4,5] k = 5
// Output: 10
// Explanation:
// The array contains 1 through 5 consecutively.
// After 5, the missing numbers are 6, 7, 8, 9, 10, and so on.
// The 5th missing positive number from the entire sequence is 10



#include<iostream>
#include<vector>
using namespace std;
int KthMissingPositiveNumber(vector<int>& arr,int k){
    // int misigNumber=k;
    // for(int i=0;i<arr.size();i++){
    //     if (arr[i]>misigNumber){
    //         return misigNumber;
    //     }
    //     else{
    //         misigNumber++;
    //     }
        
    // }
    // return -1;

	int n = arr.size()-1;
	int start=0,end=n,ans=arr.size();
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]-mid-1>=k){
			ans=mid;
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return ans+k;






    
}
int main(){
cout<<"Wealcome to the probleam of KthMissingPositiveNumber"<<endl;
int k;
cout<<"Enter the value for K: ";
cin>>k;
vector<int>arr;
arr={2,5,9,12,18,20};
cout<<KthMissingPositiveNumber(arr,k);
    return 0;
}