#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
int main(){
int n;
cout<<"Enter the number: ";
cin>>n;
int ans = fib(n);
cout<<"Answer is: "<<ans<<endl;
    return 0;
}

// example n =4 
// fib(4)
// = fib(3) + fib(2)

// fib(3)
// = fib(2) + fib(1)

// fib(2)
// = fib(1) + fib(0)

// fib(4)
// = (fib(3) + fib(2))

// = ((fib(2)+fib(1)) + (fib(1)+fib(0)))

// = (((fib(1)+fib(0)) + fib(1)) + (fib(1)+fib(0)))


// base case hit 

// fib(1) = 1
// fib(0) = 0

// backtracking 
// fib(2) = 1 + 0 = 1
// fib(3) = 1 + 1 = 2
// fib(4) = 2 + 1 = 3


// ans = 3