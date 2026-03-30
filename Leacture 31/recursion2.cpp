#include<iostream>
using namespace std;

// 1.Use recusion to print 10 to 1;
void count(int i){
    if(i==0){
        cout<<"Done"<<endl;
        return;
    }
    cout<<i<<endl;
    count(i-1);
}
int main(){
    //print 10 to 1;
    count(10);
    return 0;
}