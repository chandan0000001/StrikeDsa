#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int rollno;

    //constructor 
    
};


class customer{
    public:
    string name,bank_name;
    int age,balance,account_number;



    //constructor 
    
};
int main(){

    student s1,S2,S3;
    //here the s1 is the object of student 
    s1.name="Chandan";
    s1.age=10;
    s1.rollno=23;
    cout<<s1.name<<" "<<s1.age<<" "<<s1.rollno<<" ";
    cout<<endl;





    S2.name="Mohon";
    S2.age=34;
    S2.rollno=49;
     cout<<S2.name<<" "<<S2.age<<" "<<S2.rollno<<" ";
    cout<<endl;

  S3=S2;
//   object can be copied 
    cout<<S3.name<<" "<<S3.age<<" "<<S3.rollno<<" ";
    cout<<endl;

    customer C1;
    C1.name="Damyanti";
    C1.bank_name="SBI";
    C1.age=20;
    C1.account_number=34567890;
    C1.balance=340000;
    cout<<C1.name<<" "<<C1.bank_name<<" "<<C1.age<<" "<<C1.account_number<<" "<<C1.balance<<" ";
    return 0;
}