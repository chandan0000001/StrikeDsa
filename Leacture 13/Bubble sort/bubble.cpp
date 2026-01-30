#include<iostream>
using namespace std;
int main(){
    int arr[]={10,5,18,4,2};
    int n = 5;
    //do for only one element bigger one send to the last 
    // for(int k = 0 ; k < n-1 ;k++){  //n-1 bcz = n-1+1 = n , if use n it is out of the array
    //     if(arr[k]>arr[k+1]){
    //         swap(arr[k],arr[k+1]);
    //     }
    // }

    // //now for bubble sort
    // for(int i = 0;i<n-1;i++){
    //     for(int k =0;k<n-1-i;k++){
    //         if(arr[k]>arr[k+1]){
    //             swap(arr[k],arr[k+1]);
    //         }

    //     }
    // }
    // // return arr;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    // add flag or bool operation /
    for(int i = 0; i<n-1;i++){
        bool swapped = false;
        for(int s=0;s<n-1-i;s++){
            if(arr[s]>arr[s+1]){
                swapped =true;
                swap(arr[s],arr[s+1]);
            }
        }
        if(!swapped){
            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
    // // return arr;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}