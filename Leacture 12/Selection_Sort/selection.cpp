#include<iostream>
using namespace std;
int main(){
    // int arr []= {3,9,51,5,6,9,12,65,4};
    //  int n =9;

    // //1st task take smallest number first position to land 
    // int index = 0 ;
    // for(int i = 1; i < n ; i++){
    //     if (arr[i]<arr[index]){
    //         index = i;
    //     }
    // }
    // // return index;
    // cout<<"Smallest element is "<<arr[index]<<endl;

    //move small num first (0-4)
    //move small num index 1 (1-4)
    //move small num index 2 (2-4)
    //move small num index 3 (3-4)
    //boom array is sorted 

    int arr []= {3,9,51,5,6,9,12,65,4,54,34,343,4667};
     int n =13;

    for(int i=0;i<n;i++){
        int index = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[index]){
            index = j;
        }
        }
        swap(arr[index],arr[i]);
    }
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}