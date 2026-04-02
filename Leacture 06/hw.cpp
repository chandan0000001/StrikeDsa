
//function prime number
//function armstrong
//function swap         

#include<iostream>
using namespace std;
void primeNumber (int num){
    if(num<2){
        cout<<"It is not a prime number";
        return;
    }
    for(int i = 2;i<num;i++){
        if(num%i==0){
            cout<<" It is not a prime number ";
             return ;
        }
       
    }
    cout<<"It is a prime number ";
}
void armStrong(int num){
    int temo = num;
    int ans = 0;
    while (num>0){
        int rem = num % 10;
        ans = ans + (rem*rem*rem);
        num = num / 10;
         
    }
    if(ans == temo ){
        cout<<"It is a Armstrong number";
    }else{
        cout<<"It is not a Armstrong number";
    }
}
void swap(int &a,int &b){
         a = a + b; 
         b = a - b; 
         a = a - b;
         
}

int main(){
int num1,num2,num3;
cout<<"Enter your number to check prime or not: ";
cin>>num1;
primeNumber(num1);

cout<<"Enter your number to armStrong or not: ";
cin>>num2;
armStrong(num2);

int a , b;
cout<<"Enter the first value: ";
cin>>a;
cout<<"Enter the second value: ";
cin>>b;
swap(a,b);
cout<<a<<" "<<b<<" ";

    return 0;
}