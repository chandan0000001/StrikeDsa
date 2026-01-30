// Given a sorted array of distinct integers nums[] and a target value, return the index if the target is found in the array. If the target is not found, return the index where it would be inserted in order to maintain the sorted order.Return an integer representing the index position.
// Input: nums = [12,13,16,18,20,22,24,27], target = 27
// Output: 7
// nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], target = 11
// Output: 10

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr={12,13,16,18,20,22,24,27,30};
    int n=arr.size();
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int start=0;int end=arr.size()-1;
    int index=n;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==target){
			// return mid;
			cout<<mid<<" ";
			return 0;
		}
		else if(arr[mid]<target){
			start=mid+1;
		}
		else{
			index=mid;
			end=mid-1;
		}
	}

    
        cout<<index<<" "<<endl;
 


    return 0;
}