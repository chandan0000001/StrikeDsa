#include<iostream>
using namespace std;
// void print(int arr[],int size,int index) {
//     //base condition 
//     if((index)==size){
//         return;
//         }

//         //print 
//         cout<<arr[index];
//         print(arr,size,index+1);
// }
void reverse(int arr[],int index,int size){
    //base conditojon
    if(index==size){
        return;
    }
    //increase value 
    reverse(arr,index+1,size);
// print array
    cout<<arr[index]<<endl;

}



int main(){
   
    int arr[5]={1,2,3,4,5};
   
    // print(arr,5,0);
    // reverse(arr,0,5);
   
    return 0;
}