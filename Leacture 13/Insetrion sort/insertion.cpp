#include<iostream>
using namespace std;
int main(){

    int arr[]={20,10,5,3,18,9};
    int n = 5;
    //Proceed > move forward until you face smaller than u an equal
    //ty for only one element 
    // for(int t = 1;t>0;t--){
    //     if(arr[t]<arr[t-1]){
    //         swap(arr[t],arr[t-1]);
    //     }
    //     else {
    //         break;
    //     }
    // }
    //  for(int t = 2;t>0;t--){
    //     if(arr[t]<arr[t-1]){
    //         swap(arr[t],arr[t-1]);
    //     }
    //     else {
    //         break;
    //     }
    // }
    //  for(int t = 3;t>0;t--){
    //     if(arr[t]<arr[t-1]){
    //         swap(arr[t],arr[t-1]);
    //     }
    //     else {
    //         break;
    //     }
    // }

    // so we can see here t value change ok 

    for(int i = 1;i<n;i++){

     for(int t = i;t>0;t--){
        if(arr[t]<arr[t-1]){
            swap(arr[t],arr[t-1]);
        }
        else {
            break;
        }
    }
}

    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
