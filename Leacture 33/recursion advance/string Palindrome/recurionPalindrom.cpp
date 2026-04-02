//use recursion  for palindrome
#include<iostream>
using namespace std;
bool pali(string &s,int start,int end){
    if(start>end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return (s,start+1,end-1);
}
int main(){
    string arr = ("naman");
    pali(arr,0,4);
    if(pali)
    {
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrom"<<endl;
    }
    return 0;
}