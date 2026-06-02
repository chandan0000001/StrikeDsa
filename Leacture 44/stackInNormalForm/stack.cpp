#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<int>s;
   s.push(10);
   s.push(20);
   s.push(40);
   s.push(60);
cout<<s.top()<<"\n";
cout<<s.empty()<<"\n";
s.pop(); // remove the first element 
cout<<s.top()<<"\n";
cout<< s.size()<<"\n";
   return 0;
}


