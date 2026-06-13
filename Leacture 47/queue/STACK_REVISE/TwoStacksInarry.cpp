
// https : // strikes.in/practice/69b6ca553675dcf9736178cf

// 356. Two Stacks in an Array
// MEDIUM
// Solved

// You are given an array of a fixed size. Your task is to efficiently implement two stacks in this single array.

// The following operations must be supported:

//     push1(x): pushes element x into the first stack.

//     push2(x): pushes element x into the second stack.

//     pop1(): pops an element from the first stack and returns the popped element. If the first stack is empty, it should return -1.

//     pop2(): pops an element from the second stack and returns the popped element. If the second stack is empty, it should return -1.

// Note: The implementation should try to utilize the space efficiently.

// Example 1:
// Input: Operations: push1(1), push2(2), pop1(), push1(3), pop1(), pop1()
// Output: [1, 3, -1]
// Explanation: Standard interleaved operations.
// Example 2:
// Input: Operations: push1(2), push1(3), push1(4), pop2(), pop2(), pop2()
// Output: [-1, -1, -1]
// Explanation: Stack 2 is never pushed to.
// Example 3:
// Input: Operations: push1(2), push1(3), push2(4), pop1(), pop2(), pop2()
// Output: [3, 4, -1]
// Explanation: push1(2) -> S1:[2]. push1(3) -> S1:[2,3]. push2(4) -> S2:[4]. pop1() returns 3. pop2() returns 4. pop2() returns -1.
// Constraints:
// • 1 ≤ number of queries ≤ 10^4
// • 1 ≤ values ≤ 100
// • Sum of elements in both stacks < size of array


//         class twoStacks
// {
//     int *arr;
//     int top1;
//     int top2;
//     int size;
// public:
// //this is the constructor 
//     twoStacks(int s=100) { //input recieve hoga size 
//         // Constructor logic here
//         this->size=s;
//         //phele wala top ko lo -1 se inttialize karo 
//         top1=-1;
//         // top 2 ko size se intialize karo 
//         top2=s;
//         //arr ka uss size dedeo 
//         arr = new int[s];
//     }

//     // Add a destructor if you allocate memory dynamically
//     ~twoStacks() { 
//         delete [] arr;
//     }

//     void push1(int x) {
//         // Code here
//         if(top2-top1>1){ //agar 1 element 
//             top1++; //top ko increment karoo 
//             arr[top1]=x;  //x jo element aya hoga usse arr ke top ke anda r dal do  and do for the same for push2
//         }
//     }

//     void push2(int x) {
//         // Code here
//         if(top2-top1>1){
//             top2--;
//             arr[top2]=x;
//         }
//     }

//     int pop1() {
//         // Code here/
//         //startung ka element top 1 -1 se intit hua he agar ham 0 se dekhe at lese 1 element presesnt hga so 
//         if(top1>=0){
//             int ans = arr[top1];
//             //then top ko decrement karo 
//             top1--;
//             return ans;
//         }else{
//             return -1;
//         }

//     }

//     int pop2() {
//         // Code here
//         //top2 hama ra abhii s pointer jo ki size ke bara bara bar he 
//         if(top2 < size){
//             int ans = arr [top2];
//             //top2 pointer ko age badaha lo 
//             top2++;
//             return ans;
//         }else{
//             return -1;
//         }

//     }
// };