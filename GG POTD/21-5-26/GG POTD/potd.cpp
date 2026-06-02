// https://www.geeksforgeeks.org/problems/check-set-bits5408/1

class Solution {
  public:
  
    bool isBitSet(int n) {
        if(n == 0){
            return false;
        }
        return (n & (n + 1)) == 0;
    }
};