#include<iostream>
using namespace std;  //it reduce std::cout<<a to cout<<a;
int main(){
    //number
    int a = 23 ;
    float b = 8.9;
    char c = 'a';
    bool num1 = true;
    bool num2 = false;
    // cout<<a;
    // cout<< num1;
    // cout<< num2;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b);
    cout<<endl;
    cout<<sizeof(c);
    cout<<endl;
    cout<<sizeof(num1)<<endl;
    cout<< "Hello Coder Army";
    cout<< "Hello Chandan";
    cout<<endl;
    long long d = 1234567856789;
    cout<<d<<endl;
    cout<<sizeof(d);
    string name = "Chandan";
    cout<<name.length();
    cout<<endl;
    return 0;  // code already run or executed > it is for the operating systeam 
}