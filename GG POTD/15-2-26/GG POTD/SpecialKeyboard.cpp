// https://www.geeksforgeeks.org/problems/special-keyboard3018/1

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int optimalKeys(int n) {
        // If n is small, the maximum A s is just n (pressing A each time)
        if (n < 7) {
            return n;
        }

        // dp[i] stores the maximum number of As with i keystrokes
        vector<int> dp(n + 1, 0);

        // Initializing base cases for n < 7
        for (int i = 1; i < 7; i++) {
            dp[i] = i;
        }

        // Filling the dp table for n >= 7
        for (int i = 7; i <= n; i++) {
            // Check all possible breakdown points j where we started 
            // the Ctrl-A, Ctrl-C, Ctrl-V... sequence.
            // We need at least 3 keys for the sequence... so j goes up to i-3.
            for (int j = i - 3; j >= 1; j--) {
                int current_total = dp[j] * (i - j - 1);
                if (current_total > dp[i]) {
                    dp[i] = current_total;
                }
            }
        }

        return dp[n];
    }
};