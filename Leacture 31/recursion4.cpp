#include<iostream>
using namespace std;
void print(int num,int range){
    if(num==range+1){
        return;
    }
    cout<<num<<" ";
    print(num+1,range);
}
int main(){
    int n;
    cin>>n;
    print (1,n);
    return 0;
}