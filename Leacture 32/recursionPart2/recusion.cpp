#include<iostream>
using namespace std;
int sumUptoNth(int num,int range){
   if(range<=0){
    return 0;
   }
    if (num==range){
        return range;
    }
    return num+sumUptoNth(num+1,range);
}
int main(){
    //sum up to nth number 
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int ans = sumUptoNth(1,n);
    if(ans==0){
        cout<<"Invalid input"<<endl;
    }else{
    cout<<"Answer is "<<ans<<endl;
    }
    return 0;
}