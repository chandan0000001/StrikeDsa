// 39. Product Pair
// HARD
// Solved

// Given an array arr[] of integers and a number target, determine if there exists a pair of elements in arr whose product equals target . Return true if such a pair exists, otherwise return false.

// Example 1:
// Input: arr = [-10, 20, 9, -40], target = 30
// Output: false
// Explanation:
// No pair exists with product 30.
// Example 2:
// Input: arr = [10, 20, 9, 40], target = 400
// Output: true
// Explanation:
// As 10 * 40 = 400, the answer is true.
// Constraints:
// • 1 ≤ arr.length ≤ 10^5
// • -10^8 ≤ arr[i] ≤ 10^8
// • -10^18 ≤ target ≤ 10^18





// bool isProduct(vector<int>& arr, long long target) {
//     // Your code here
// 	sort(arr.begin(),arr.end());
// 	int mid=-1,n=arr.size();
// 	for(int i=0;i<n;i++){
// 		if(arr[i]<0){
// 			mid=i;
// 		}else{
// 			break;
// 		}
// 	}

// 	if(target>=0){//if both number lie in -ve region
// 		int s=0,e=mid;
// 		while(s<e){
// 			if(arr[s]*arr[e]==target){
// 				return true;
// 			}else if(arr[s]*arr[e]<target){
// 				e--;
// 			}else{
// 				s++;
// 			}
// 		}
// 		//both number lie in +ve region 
// 		s=mid+1,e=n-1;
// 		while(s<e){
// 			if(arr[s]*arr[e]==target){
// 				return true;
// 			}else if(arr[s]*arr[e]<target){
// 				s++;
// 			}else{
// 				e--;
// 			}
// 		}

// 	}
// 	else{
// 		//if the target live in -ve region and another live in +ve region 
// 		int s=0;int e=mid+1;
// 		while(s<e&&e<n){
// 			if(arr[s]*arr[e]==target){
// 				return true;
// 			}else if(arr[s]*arr[e]>target){
// 				e++;
// 			}else{
// 				s++;
// 			}
// 		}

// 	}
// 	return false;
	


// }