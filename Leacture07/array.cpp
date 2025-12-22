#include<iostream>
using namespace std;
int main(){

    //introduction to array
    // 5 student store the marks of 5 students 
    // int marks1 = 60;
    // int marks2 = 90;
    // int marks3 =50;
    // int marks4 = 93;
    // int marks5 = 90;
    // cout<<marks1<<endl;
    // cout<<marks2<<endl;
    // cout<<marks3<<endl;
    // cout<<marks4<<endl;
    // cout<<marks5<<endl;
   //what if 1000 students ??
   //not possible right so we choose array ;we need a data structure to arrange this 

//    int marks[5] = {70,80,40,50,90};
// //    cout<<marks[0]<<endl;
// //    cout<<marks[1]<<endl;
// //    cout<<marks[2]<<endl;
// //    cout<<marks[3]<<endl;
// //    cout<<marks[4]<<endl;
// //    cout<<marks[5]<<endl;
// for(int i = 0; i <= 5 ;i++){
//     cout<<marks[i]<<endl;
// }

// int arr[3];
// arr[0] = 4;
// arr[1] = 6;
// arr[2] = 3;
// for(int i =0 ; i<= 3;i++){
//     cout<<arr[i]<<" ";
// }



// int arr2[34];

// for(int i =0 ; i<= 34;i++){
//     cout<<arr2[i]<<" ";
// }


// int arr[3] = {0};
// for(int i =0 ; i< 3;i++){
//     cout<<arr[i]<<endl;
// }


// int arr[21] = {12,34};
// for(int i =0 ; i< 21;i++){
//     cout<<arr[i]<<" ";
// }

//array why index 0 ? comming sooon lecture ?
//

// int n;
// cout<<"Enter the size of an array ?";
// cin>>n;
// int arr[n];



// int n; // it is a bad habit
// int arr[n]; // it is a bad habit 
// cout<<"Enter the size of an array...?";
// cin>>n;
// cout<<"Enter the value in array..";
// for(int i =0 ; i < n ; i++){
//     cin>>arr[i];
// }
// cout<<"Your fucking results are: ";

// for(int i = 0 ; i <=n ; i++){
//     cout<<arr[i]<<endl;
// }


// // int a = 10;
// // int b = 10;
// // b=20;
// // cout<<&a<<endl;
// // cout<<&b<<endl;
// int sum = 0;
// int marks[5] = {70,80,40,30,20};
// // for(int i = 0 ; i <5 ; i++){
// //     sum+= marks[i];
// // }
// // cout<<sum<<endl;
// // cout<<(sum/5)<<endl;

// for(int i =0 ; i <5 ; i++){
//     cout<<&marks[i]<<endl;
// }
// // 0x7ffc798514f0
// // 0x7ffc798514f4
// // 0x7ffc798514f8
// // 0x7ffc798514fc
// // 0x7ffc79851500




// int marks[5] = {70,80,40,30,20};
// //heighest mark value 
// int heighst = marks[0];
// int index = 0;
// for(int i = 0 ; i <5 ; i++){
//     if(marks[i]>heighst){
//         heighst=marks[i];
//         index = i ;
//     }
// }
// cout<<heighst<<" "<<index<<endl;



// int nums[5] = {1,2,3,4,5};
// int find = 5;
// int index = 0;
// for(int i = 0 ; i < 5; i++){
//     if(find == nums[i]){
//         index = i;
//         cout<<"yes"<<" "<<"at "<< i<<" index ";
//         return 0;
//     }
// }
// cout<<"No"<<" ";



int nums [6] = {1,2,3,4,5,6};
bool found = false;
int find = 2;
int index = 0;
for(int i = 0 ; i < 6; i++){
    if(nums[i] == find){
        found = true;
        index = i;
    }
}
if (found){
    cout<<"Yes found  ";
}else{
    cout<<"Not found";
}

    return 0;
}