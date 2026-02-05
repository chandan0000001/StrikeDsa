// 31. Capacity To Ship Packages Within D Days

// You are given an array weights[] where weights[i] represents the weight of the i-th package on a conveyor belt. These packages must be shipped from one port to another within days days using a ship.
// Each day, packages are loaded onto the ship in the order given by the weights array. The ship has a maximum weight capacity, and you cannot load more weight than this capacity in a single day. The cargo must be shipped in the given order, so packages cannot be rearranged.
// Your task is to find the least weight capacity of the ship that will allow all packages to be shipped within the given number of days.
// Example 1:
// Input: weights = [3, 2, 2, 4, 1, 4], days = 3
// Output: 6
// Explanation:
// A ship capacity of 6 is the minimum to ship all the packages in 3 days like this:
// 1st day: 3, 2
// 2nd day: 2, 4
// 3rd day: 1, 4
// Example 2:
// Input: weights = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], days = 5
// Output: 15
// Explanation:
// A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
// 1st day: 1, 2, 3, 4, 5
// 2nd day: 6, 7
// 3rd day: 8
// 4th day: 9
// 5th day: 10
// Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.
// Constraints:
// • 1 ≤ days ≤ weights.length ≤ 5 × 10^4
// • 1 ≤ weights[i] ≤ 500



#include<iostream>
#include<vector>
using namespace std;
bool isShipPackagesPossible(int maxShip, vector<int>& weights, int days){
        int count = 1;          // day 1
    int shipLoad = 0;

    for(int i = 0; i < weights.size(); i++) {
        if(shipLoad + weights[i] <= maxShip) {
            shipLoad += weights[i];
        } else {
            count++;                // new day>next day 
            shipLoad = weights[i];
        }
    }
    return count <= days;
}
int main(){
    cout<<"Wealcome to the  Capacity To Ship Packages Within D Days:  "<<endl;
 vector<int>weights;
    weights={3, 2, 2, 4, 1, 4};
     int days;
    cout<<"Enter the value for  days: ";
    cin>>days;
    int n = weights.size();
    int start=0,end=0,ans=-1;
    for(int i=0;i<n;i++){
        start=max(start,weights[i]);
        end+=weights[i];
    }
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        //mid >> maxPaint
        if(isShipPackagesPossible(mid,weights,days)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    // return ans;

    cout<<"ShipPackagesPossible "<<ans<<endl;
    cout<<endl;
    

    return 0;
}