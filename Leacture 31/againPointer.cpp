#include<iostream>
using namespace std;
int main(){
    
   //2d array created
   //new -> memory allocate in heap  and their adress store in stack 
   //stack is here arr 
    int **arr= new int *[5];
    for(int i=0;i<5;i++){
        arr[i]=new int[6];
    }
    // add the value in the 2D array
    for (int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            arr[i][j]=i+j;
        }
    }
    //print the 2d arry
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}