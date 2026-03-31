#include<iostream>
using namespace std;
int main(){
    //3d arry
    int ***arr = new int**[3];
    //now it ponter to the 2d array
    for(int i=0;i<3;i++){
        arr[i]=new  int*[5];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=new int[6];
        }
    }
//put the value int the array
    //3 row 5 col 6 height 
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<6;k++){
                arr[i][j][k]=i+j+k;
            }
        }
    }

    //print the value 
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<6;k++){
                // arr[i][j][k]=i+j+k;
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}