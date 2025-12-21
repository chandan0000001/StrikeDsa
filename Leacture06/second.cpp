#include<iostream>
using namespace std;
// mark
void findGrade(int marks){
    if(marks>90){cout<<"Grade: A+"<<endl;}
    else if (marks>80){
        cout<<"Grade: A"<<endl;
    }
    else if (marks>70){
        cout<<"Grade: B"<<endl;
    }
    else{
        cout<<"Grade: C"<<endl;
    }
}

int main(){


    int student1 = 89 , student2 = 76;
    findGrade(student1);
    findGrade(student2);

    return 0;
}