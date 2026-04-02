#include<iostream>
using namespace std;

void assending(int arr[],int index){
    if(index==-1){
        return;
    }
    //decrease the value 
    assending(arr,index-1);
    //print the value 
    cout<<arr[index]<<endl;

}

void decending(int arr[],int index){
    if(index==-1){
        return;
    }
     cout<<arr[index]<<endl;
   decending(arr,index-1);
   

}


int main(){
   
    int arr[5]={1,2,3,4,5};
   
    assending(arr,4);
    // decending(arr,4);
   
    return 0;
}