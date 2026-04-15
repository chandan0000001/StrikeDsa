#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int rollno;

    //constructor 
    student(string n1,int age1,int roll1){
        name=n1;
        age=age1;
        rollno=roll1;
    }
};
int main(){
    student s1("chandan",10,394);
    cout<<s1.name<<" "<<s1.age<<" "<<s1.rollno<<" ";

    return 0;
}


