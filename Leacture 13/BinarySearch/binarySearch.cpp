#include<iostream>
using namespace std;
int main(){
    
    //take two pointer start and end
    //for mid >> start+(end-start)/2
    //if(arr[mid]<target){
    //     start = mid+1; 
    // }
    // else if (arr[mid]>target){
    //     end = mid-1;
    // }


    int n = 7,target;
    int ans = -1;
    int arr []={2,24,54,233,255,687,7254};
    cout<<"Enter your target value: ";
    cin>>target;

    int start=0,end=n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            //return mid;
            ans = mid;
            break;
        }
        else if(arr[mid]<target) {
            start=mid+1;
        }
        else {
            //(arr[mid]>target)
            end=mid-1;
        }  
    }
  if(ans==-1){
    cout<<"Element not found";
  }else{
    cout<<"Index is is "<<ans<<endl;
  }
    return 0;
}