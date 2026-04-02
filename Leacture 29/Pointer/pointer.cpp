#include<iostream>
using namespace std;


// //int p[] is same is the int *p
// int add(int *p,int *size){
//     //adress by the pointer it do not create a copy 
//     int ans=0;
//     for(int i=0;i<*size;i++){
//         ans+=p[i];
//     }
//     return ans;
// }
int main(){
    //  int a =10;
    // //  cout<<a<<endl;;
    // //  cout<<&a<<endl;//print adress
    // // int adress=&a;//adress canot be as a inout > size matters possible but compiler warmning 
    //so pointer created to store it 
    // int *ptr=&a;
    // cout<<ptr<<endl;//print adress ptr is a pointer which point to adreess of a ;
    // cout<<*ptr<<endl;//print value 
    // cout<<&ptr<<endl;


    // int a = 10;
    // int *ptr =&a;
    // //ptr is a pounter which points to int type value 
    // cout<<a<<endl;//value of a
    // cout<<&a<<endl;//adress of a 
    // cout<<ptr<<endl;//ptr is a ponter which points(and print it ) to the adress of a
    // cout<<&ptr<<endl;//print the adress of ptr 


    //how array  works

    // int arr[5]={1,3,4,2,10};
    // for (int i=0;i<5;i++){
    //     // cout<<arr[i]<<endl;
    //     // cout<<arr<<endl;
    //     cout<<arr+i<<endl;//it preint adress of the value 
    //     cout<<*(arr+i)<<endl;//it print at the that address which value is stored 
    // }

    // int *p=arr; //p pointer stote the value which is present in the adress of arr 

    // for (int i=0;i<5;i++){
    //    cout<<p[i]<<endl;
    //    cout<<p+i<<endl;
    // }
    
    




    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // int n=10;
    // int ans = add(arr,&n);
    // cout<<ans<<endl;







    // char arr[5]={'a','b','c','d','e'};
    // char *pptr =arr;
    // cout<<arr<<endl; //it doesnot print it adress for character >  not like your gf
    //abcde
    // cout<<pptr<<endl;//abcde
    //if you want to force adress then try this 
    // cout<<(void*)pptr<<endl;//0x7ffe058f82f3  //it shows the type casting 



    

 
    return 0;
}