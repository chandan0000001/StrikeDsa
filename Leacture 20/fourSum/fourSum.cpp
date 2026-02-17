// 44. Four Sum


// Given an array A of n integers and an integer X, determine whether there exists a combination of four elements in the array whose sum equals X.

// Return true if such a combination exists, otherwise return false.

// Example 1:
// Input: A = [1, 5, 1, 0, 6, 0], X = 7
// Output: 1
// Explanation:
// 1, 5, 1, 0 are the four elements which makes sum 7.
// Example 2:
// Input: A = [1, 1, 1, 1, 1], X = 4
// Output: 1
// Explanation:
// There are four 1's , whose sum is 4.
// Constraints:
// • 4 ≤ n ≤ 200
// • -10^9 ≤ A[i] ≤ 10^9
// • -10^9 ≤ X ≤ 10^9


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector<int> arr = {1,5,1,0,6,0};
    int target = 7;

    sort(arr.begin(), arr.end());
    int n = arr.size();
    bool found = false;

    for(int i = 0; i < n-3; i++){
        for(int j = i+1; j < n-2; j++){

            int start = j + 1;
            int end = n - 1;
            int newTarget = target - arr[i] - arr[j];

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
        if(found) break;
    }

    if(found) cout << "true"<<endl;
    else cout << "false"<<endl;

    return 0;
}
