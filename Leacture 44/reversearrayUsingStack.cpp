// https : // strikes.in/practice/68ac0c51b68bc4c304e47837

//         void reverseArray(vector<int> &arr)
// {
//     // Using stack
//     stack<int> s;
//     // traverse karr pura array ko
//     for (int i = 0; i < arr.size(); i++)
//     {
//         s.push(arr[i]); // ssare element ko stack ke andar adalo
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         arr[i] = s.top();
//         s.pop();
//     }
// }