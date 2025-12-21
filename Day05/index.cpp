#include<iostream>
using namespace std;
int main(){


//  cout<<"Hello ";



//probleams
// int i = 1;
// while(i<10){
//     cout<<i<<" ";
//     i++;
// }

// cout<<endl;

// int i = 1;
// do{
//     cout<<i<<" ";
//     i++;
// }while(i<10);



// int num;
// int ans = 0;
// //reverse number 
// //ans = ans*10+lstdigit 
// cout<<"Enter the number u want for reverse : ";
// cin>>num;
// while(num!=0){
//     int lastDigit = num%10;
//     num = num/10;
//     ans = ans*10+lastDigit;

// }
// cout<<ans<<endl;




// //Decimal to binary 
// int num,ans = 0;
// cout<<"Enter the number : ";
// cin>>num;
// while(num!=0){
//     //remineder
//     int rem = num % 2;
//     //Divied
//     num = num / 2;
//     ans = ans*10+rem;
// }
// //reverse number 
// num = ans;
// ans = 0;
// while(num!=0){
//     int lastDigit = num%10;
//     num = num/10;
//     ans = ans*10+lastDigit;

// }
// cout<<ans<<endl;



// decimal to binary
// 
// int num = 256 ,ans = 0 ,mul = 1;
// while(num!=0){
// //Reminder 
// int rem = num%2;
// //Divied 
// num = num / 2;
// ans = ans + rem * mul;
// mul = mul*10;
// }
// cout<<ans<<endl;



//reverse number 
// int num = 23154;
// int ans = 0;
// while(num){
//     //lastDigit
//     int lastDigit = num % 10 ;
//     num = num /10;
//     ans = ans * 10 + lastDigit;
// }
// cout<<ans<<" ";


// decimal to binary 
// int num = 13  , ans = 0;
// while(num){
//     int rem = num%2;
//     num = num / 2;
//     ans = ans * 10 + rem;
// }

// //reverse 
// num = ans ;
// ans = 0 ;
// while(num){
//     int lastDigit = num % 10;
//     num = num / 10;
//     ans = ans * 10 + lastDigit; 
// }
// cout<< ans <<" ";





// int num = 14 , ans = 0 , mul = 1  ; 
// while(num){
//     int rem = num % 2;
//     num = num / 2 ;

//     ans = ans + rem * mul  ;
//     mul = mul * 10;
// }
// cout<<ans<<" ";



// XOR type 

// int num = 14 , ans = 0 , mul = 1  ; 
// while(num){
//     int rem = num &1 ;
//     num = num >> 1 ;

//     ans = ans + rem * mul  ;
//     mul = mul * 10;
// }
// cout<<ans<<" ";



// int num = 1101 , ans = 0 , mul = 1;
// while(num){
//     int rem = num % 10;
//     num = num / 10;
//     ans = ans+rem*mul;
//     mul = mul*2;
// }
//   cout<<ans<<" ";







//factorial




// int num ;
// cout<<"Give a number : ";
// cin>>num;
// long long  fact = 1 ; //if int  20 then overflow 
// for(long i = 1 ; i <=num ; i++){
//     fact = fact * i;
// }
// cout<<fact<<" ";




//fibonacci number 
// int num , a = -1 , b=1, c;
// cout<<"Enter a digit u want to go Fibonaciii series  ";
// cin>>num;
// for(int i = 0 ; i <=num ; i++){
//      c = a + b;
//      cout<<c<<" "<<endl;
//      a=b;
//      b=c;
    
// }




//armstrong
// int num = 153;
// int sum = 0;
// int x = num;
// while(x){
//     int rem = x % 10;
//     sum = sum + (rem*rem*rem);
//     x = x / 10;
// }
// // cout<<sum<<" ";
// if(sum == num){cout<<"Armstromg Number ";}
// else{cout<<"Not a armstrong number ";}



int num ,ans =1 ;
cout<<"Enter your number ";
cin>>num  ;
while(num){
if (num == 0 ) {
    cout<<"Answer is: ";
    cout<<0<<endl;
    return 0;
}
for(int i = 1; i*i<=num;i++){
    ans = i;
    
}
// return ans;
cout<<"Answer is: ";
cout<<ans<<" ";
}

cout<<"num not found";
    return 0;
}