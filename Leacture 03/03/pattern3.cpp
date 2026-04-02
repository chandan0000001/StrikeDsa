#include<iostream>
using namespace std;
int main (){
  
    int row,col;
    // cout<<"Enter the value: ";
    // cin>>n;
    //n = 5;








    // for(row=1;row<=n;row++){
    //     for(col=1;col<=(n-row);col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }




    // for(row=1;row<=n;row++){
    //     for(col=1;col<=(n-row);col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }





    //   for(row=1;row<=n;row++){
    //     for(col=1;col<=(n-row);col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<row;
    //     }
    //     cout<<endl;
    // }




    // for(row=1;row<=n;row++){
    //     for(col=1;col<=(n-row);col++){
    //         cout<<" ";
    //     }
    //     for(col=row;col>=1;col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }


 




    for( row = 1; row <= 5; row++) {
    // spaces
    for( col = 1; col <= 5 - row; col++) {
        cout << " ";
    }
    // characters
    for(char ch = 'A'; ch <= 'A' + (row - 1); ch++) {
        cout << ch ;
    }
    cout << endl;
}



    return 0;
}