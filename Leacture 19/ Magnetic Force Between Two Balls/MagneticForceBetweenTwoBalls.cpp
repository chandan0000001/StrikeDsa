// 35. Magnetic Force Between Two Balls       // MEDIUM

// In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his newly invented baskets.
// You have n empty baskets located at positions given by the array position[]. Morty has m balls and needs to distribute them into these baskets such that the minimum magnetic force between any two balls is maximized.
// The magnetic force between two different balls placed at positions xx and yy is defined as ∣x−y∣∣x−y∣.
// Given the integer array position and the integer m, return the maximum possible minimum magnetic force between any two balls after optimal distribution.
// Example 1:
// Input: position = [5, 4, 3, 2, 1, 1000000000], m = 2
// Output: 999999999
// Explanation:
// We can use baskets 1 and 1000000000.
// Example 2:
// Input: position = [1, 2, 3, 4, 7], m = 3
// Output: 3
// Explanation:
// Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6].
// The minimum magnetic force is 3.
// We cannot achieve a larger minimum magnetic force than 3.
// Constraints:
// • 1 ≤ n = position.length ≤ 10^5
// • 0 ≤ position[i] ≤ 10^9
// • All elements in position are unique
// • 2 ≤ m ≤ n

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool optimalDistributionofMagneticBall(int mid,vector<int>& position,int m){
    int n=position.size();
    int ballCount=1;  int positionOfBall=position[0];
    for(int i=1;i<n;i++){
        if(position[i]-positionOfBall>=mid){
            ballCount++;
            positionOfBall=position[i];
        }
    }
    return ballCount>=m;
}
int main(){
    cout<<"Wealcome to Magnetic Force Between Two Balls probleam: ";
    vector<int>position;int m;//m=no. balls;
    // position = {1, 2, 3, 4, 7};
    position={5, 4, 3, 2, 1, 1000000000};
    cout<<"Enter the no of balls: ";
    cin>>m;
    sort(position.begin(),position.end());
    int start=1,end=0,mid=0,ans=0,n=position.size();
    end=position[n-1]-position[0];
    while(start<=end){
        mid=start+(end-start)/2;
        if(optimalDistributionofMagneticBall(mid,position,m)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    // return ans;
    cout<<ans<<endl;
    cout<<endl;
}    