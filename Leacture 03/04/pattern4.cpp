#include<iostream>
using namespace std;
int main(){
 
    int row,col,n;
    cout<<"Enter the value : ";
    cin>>n;

    //n=5
//     *
//    ***
//   *****
//  *******
// *********
    // for(row=1;row<=n;row++){
    //     for(col=1;col<=(n-row);col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=2*row-1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Enter the value : 5
        // 1 
    //   1 2 1 
    // 1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 

    // for(row=1;row<=n;row++){
    //     for(col=1;col<=(n-row);col++){
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<col<<" ";
    //     }
    //     for(col=(row-1);col>=1;col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

//     Enter the value : 5
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

    // for(row=n;row>=1;row--){
    //     for(col=1;col<=(n-row);col++){
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=2*row-1;col++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }







//     Enter the value : 5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

//     for(row=n;row>=1;row--){
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         for(col=1;col<=(2*n)-2*row;col++){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//         for(row=1;row<=n;row++){
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         for(col=1;col<=(2*n)-2*row;col++){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }






// Enter the value : 5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *



//      for(row=1;row<=n;row++){
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         for(col=1;col<=2*n-2*row;col++){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//      }
//      for(row=(n-1);row>=1;row--){
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         for(col=1;col<=2*n-2*row;col++){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//      }
 





//n=5
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 



for(row=1;row<=n;row++){
    for(col=1;col<=(n-row);col++){
        cout<<" ";
    }
    for(col=1;col<=row;col++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
for(row=n;row>=1;row--){
    for(col=1;col<=(n-row);col++){
        cout<<" ";
    }
    for(col=1;col<=row;col++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
 
    return 0;
}