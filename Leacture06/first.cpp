#include<iostream>
using namespace std;

int factorial (int x){
    int fact = 1;
for(int i = 1; i <= x;i++){
    fact = fact *i;
}
// cout<<"Your factorial is: "<<fact<<" "<<endl;
    return fact;
}


void sum (int a,int b,int c){
    cout<<"sum is ";
    cout<<a+b+c;
}

int main (){

//    int num = 5;
//    int fact = 1 ;
//   for(int i = 1 ; i <= num; i ++) {
//     fact = fact*i;
//   }
//   cout<<fact;


int num;
cin>>num;
cout<<"Your factorial is "<<factorial(num)<<endl;

sum (2,3,4);




    return 0;
}