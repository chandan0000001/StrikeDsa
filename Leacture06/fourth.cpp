#include<iostream>
using namespace std;

// int square(int n);


//function overloading > name same parameter different 
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b ,int c){
    return a + b+c;
}


float sum(float a , float b){
    return a+b;
}

int main (){

// int num = 5 ;
// square (num);
// cout<<square(num)<<endl;
   float a = 4.3 , b = 3.4;

//function overloading > name same parameter different 
cout<<sum(3,4)<<endl;
cout<<sum(3,4,5)<<endl;
cout<<sum(a,b)<<endl;
return 0;
}



//function call
// int square(int n ){
//     return n*n;
// }
