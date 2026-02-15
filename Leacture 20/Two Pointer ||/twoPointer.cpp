// 298. Two Sum II
// You are given a 1-indexed array of integers nums sorted in non-decreasing order, and an integer target.
// Your task is to find two distinct indices index1 and index2 such that:
//     nums[index1] + nums[index2] == target
//     1 ≤ index1 < index2 ≤ nums.length
// Return the result as an integer array [index1, index2].
// Example 1:
// Input: nums = [4, 9, 18, 27, 31], target = 22
// Output: [1, 3]
// Example 2:
// Input: nums = [9, 19, 26, 32, 37, 39], target = 48
// Output: [1, 6]
// Constraints:
// • 2 <= nums.length <= 3 * 10^4
// • -1000 <= nums[i] <= 1000
// • nums is sorted in non-decreasing order.
// • -1000 <= target <= 1000
// • The tests are generated such that there is exactly one solution.



#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Wealcome to two pointer probleams: ";
    vector<int>nums;
    nums = {4, 9, 18, 27, 31};
    vector<int>ans;
    int target;
    cout<<"Enter the value of tagret: ";
    cin>>target;
    int start=0;int end=nums.size()-1;
		while(start<end){
			if(nums[start]+nums[end]==target){
				ans.push_back(start+1);
				ans.push_back(end+1);
				// return ans;
                break;
			}
			else if(nums[start]+nums[end]<target){
				start++;
			}
			else{
				end--;
			}
		}
		// return ans; 
        cout<<ans[0]<<endl;cout<<ans[1]<<endl;
        return 0;
}


    

