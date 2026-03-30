#include<iostream>
using namespace std;
//2.print even number use recusion 
// void evenNumberPrint(int num){
//   if(num==0)return;
//     cout<<num<<""<<endl;
//     evenNumberPrint(num-2);
// }


//3.print odd number use recusion 
void oddNumber(int num){
    if(num==0){
        return;
    }
    if(num%2!=0){
        cout<<num<<" ";
    }
    oddNumber(num-1);
}
int main(){
    // evenNumberPrint(20);
    oddNumber(20);
}