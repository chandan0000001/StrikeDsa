#include<iostream>
using namespace std;
int main(){
     int a =10;
    //  cout<<a<<endl;;
    //  cout<<&a<<endl;//print adress
    // int adress=&a;//adress canot be as a inout > size matters 
    int *ptr=&a;
    cout<<ptr<<endl;//print adress ptr is a pointer which point to 10;
    cout<<*ptr<<endl;//print value 
    cout<<&ptr<<endl;
    return 0;
}