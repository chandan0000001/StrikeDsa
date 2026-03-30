#include<iostream>
using namespace std;
int numSum(int num){
    if(num==-1){
        return 0;
    }
  return num+numSum(num-1);
}

int main(){

   //sum of num 20 to 1
   int sum = numSum(20);
   cout<<sum;

    return 0;
}