#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int start,int mid,int end){
    vector<int>temp(end-start+1);
    int index =0;
    int left = start;
    int right = mid+1 ;
    while(left <= mid && right <= end){
        if(arr[left] <= arr [right]){
            temp[index++]=arr[left++];
        }
        else{
            temp[index++]=arr[right++];
        }
    }
    //for rest element 
    while(left <= mid){
        temp[index++]=arr[left++];
    }
    while (right<=end){
        temp[index++]=arr[right++];
    }
    // copy the all element from temp array to orginal array 
    index =0;
    for(int i = start;i<=end;i++){
        arr[i]=temp[index++];
    }
    
}

void mergeSort(vector<int> &arr,int start,int end){
    
    //handle the base case 
    if(start>=end){
        return;
    }

    int mid = start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}


int main(){
   vector<int>arr;
   arr={1,23,43,65,34,67,90,21,65};
   mergeSort(arr,0,arr.size()-1);

   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }
}