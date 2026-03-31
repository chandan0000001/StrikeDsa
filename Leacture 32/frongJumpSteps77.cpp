// 77. Frog Jump Steps ( Count number of hops )


// A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top of nth step.


// Example 1:
// Input: n = 2
// Output: 2
// Explanation:
// Below are the 2 ways to reach 2nd step:
// i) 1 step + 1 step
// ii) 2 step
// Example 2:
// Input: n = 4
// Output: 7
// Explanation:
// Below are the 7 ways to reach 4th step:
// i) 1 step + 1 step + 1 step + 1 step
// ii) 1 step + 2 step + 1 step
// iii) 2 step + 1 step + 1 step
// iv) 1 step + 1 step + 2 step
// v) 2 step + 2 step
// vi) 3 step + 1 step
// vii) 1 step + 3 step
// Constraints:
// • 1 <= n <= 10⁵


// //use recusion to solve it 
// int countHops(int n) {
//     // Your code here   
//     if(n<=2)return n;
//     if(n==3)return 4;
//     return countHops(n-1)+countHops(n-2)+countHops(n-3);
// }


// n|step
// 1|1 
// 2|2
// 3|4
// 4|7
// 5|13