#include<iostream>
using namespace std;

//create a classs 
class Customer{
    public:
    int age,balance;
    string name;

};

int main(){
    Customer *c1 = new Customer();
    // (*c1).name="Chandan";
    // (*c1).age=38;
    // (*c1).balance=234;
    // or we can write this type also both have mening same 
    c1->name="Chandan";
    c1->age=73;
    c1->balance=23245;
    cout<<(*c1).name<<" ";

    return 0;
}