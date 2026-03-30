#include<iostream>
using namespace std;
// void birthDayCount (int i){
//     cout<<i<<"Days left for birthday\n";
// }



    //convert into recurson 


void BirthDayCount(int i){
    if(i==0){
        cout<<"Happy BirthDay"<<endl;
        return;
    }
        cout<<i<<" days left for birthday"<<" "<<endl;
    BirthDayCount(i-1);
    
    
}
int main(){

    //recursion start 
    //function schedule(){ 
    //if placed
    //eat->sleap->gym->repeat
    // schedule()
    // }
   
    // for(int i=30;i>0;i--){
    //     birthDayCount(i);
    // }
    // cout<<"Happy BirthDay";



    //convert into recurson 


    BirthDayCount(30);

    return 0;
}