// 311. Triplet Sum in Array


// Given an array arr and an integer target, determine if there exists a triplet in the array whose sum equals the given target.

// Return true if such a triplet exists, otherwise, return false.

// Example 1:
// Input: arr = [40,20,10,3,6,7], target = 24
// Output: false
// Explanation:
// No triplet in the array sums to 24.
// Example 2:
// Input: arr = [1,4,45,6,10,8], target = 13
// Output: true
// Explanation:
// The triplet {1, 4, 8} sums up to 13.
// Constraints:
// • 3 ≤ arr.size() ≤ 5*10^3
// • 0 ≤ arr[i], target ≤ 10^5


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector<int> arr = {1,4,45,6,10,8}; 
    int target = 13;

    sort(arr.begin(), arr.end());
    int n = arr.size();
    bool found = false;

    for(int i = 0; i < n-2; i++){
        int start = i + 1;
        int end = n - 1;
        int newTarget = target - arr[i];

        while(start < end){
            int sum = arr[start] + arr[end];

            if(sum == newTarget){
                found = true;
                break;
            }
            else if(sum < newTarget){
                start++;
            }
            else{
                end--;
            }
        }
        if(found) break;
    }

    if(found) cout << "true"<<endl;
    else cout << "false"<<endl;

    return 0;
}
