#include<iostream>
using namespace std;
int main(){



    //prime number 
    // int num;
    // cin >>num;
    // if(num<2){
    //     cout<<"Not s prime number" ;
    // }
    // for(int i =2 ; i<=num-1;i++){
    //     if (num%i==0){

        
    //     cout<<"Not a prime number";
    //     return 0; //tells dont proceed anything from below 
    //     }
    // }
    // cout<<"It is a prime number ";


//Digit sum
    int num = 2345678;
    int sum = 0;


    while(num){
        int rem = num%10;
        sum = sum + rem;
        num = num / 10;
    }
    cout<<sum<<" ";


    // int i = 0;
    // while(i<10){
    //     cout<<i;
    //     i++;
    // }








    return 0;
}