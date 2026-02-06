// 32. Koko Eating Bananas

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
// Return the minimum integer k such that she can eat all the bananas within h hours.
// Example 1:
// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:
// Input: piles = [30,11,23,4,20], h = 5
// Output: 30
// Constraints:
// • 1 ≤ piles.length ≤ 10^4
// • 1 ≤ piles[i] ≤ 10^9
// • piles.length ≤ h ≤ 10^9

#include<iostream>
#include<vector>
using namespace std;
bool isEatingBananaPossible(int maxSpeed,vector<int>& piles, int h){
	int totalTime=0,n=piles.size();
	for(int i=0;i<n;i++){
		totalTime+=piles[i]/maxSpeed;
		if(piles[i]%maxSpeed){
			totalTime++;
		}
	}
	return totalTime<=h;
}
int main(){
    vector<int>piles;
    piles = {30,11,23,4,20};

    cout<<"Enter the time in hour: ";
    int h;cin>>h;


    int start=1,end=0,n=piles.size(),ans;
	for(int i=0;i<n;i++){
		end=end+piles[i];
	}
	while(start<=end){
		int mid=start+(end-start)/2;
		if(isEatingBananaPossible(mid,piles,h)){
			ans=mid;
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	// return ans;
    cout<<"EatingBanana "<<ans<<endl;
    cout<<endl;

    return 0;
}