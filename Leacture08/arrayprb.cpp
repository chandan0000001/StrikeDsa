#include<iostream>
using namespace std;
// here array is not new created they point to same array not extra array created 
void printValue(int a[],int n){


    for(int i = 0 ; i < n;i++){
        cout<<a[i]<<endl;
    }
}
int main (){

    int arr [5] = {10,20,11,18,30};
    printValue(arr,5);






    return 0;
}