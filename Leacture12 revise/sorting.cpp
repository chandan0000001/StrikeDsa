

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;
//     int arr[1000] = {10, 4, 6, 2, 7, 3};

//     for (int i = 0; i < n - 1; i++) {
//         int index = i;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[index]) {
//                 index = j;
//             }
//         }

//         swap(arr[i], arr[index]); 
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[6] = {10, 4, 6, 2, 7, 3};

    for (int i = 0; i < n - 1; i++) {
        int index = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }

        swap(arr[i], arr[index]); // swap AFTER inner loop
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
