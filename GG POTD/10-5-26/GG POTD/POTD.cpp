
//Max Profit from Two Machines
//  https://www.geeksforgeeks.org/problems/max-profit-from-two-machines/1

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(int x, int y, vector<int> &a, vector<int> &b) {
        int n = a.size();
        vector<int> diff(n);
        long long totalProfit = 0;

        // Step 1: Assume all tasks are initially assigned to Machine B
        for (int i = 0; i < n; i++) {
            totalProfit += b[i];
            diff[i] = a[i] - b[i]; // The gain/loss if we switch to Machine A
        }

        // Step 2: Sort differences in descending order
        sort(diff.begin(), diff.end(), greater<int>());

        // Step 3: Satisfy Machine B's limit (y)
        // Machine A must take at least (n - y) tasks
        int minRequiredA = max(0, n - y);
        int tasksToA = 0;

        // Forced assignment to A to stay within B's capacity
        for (int i = 0; i < minRequiredA; i++) {
            totalProfit += diff[i];
            tasksToA++;
        }

        // Step 4: Add more tasks to A if they increase profit and we are within limit x
        for (int i = minRequiredA; i < n && tasksToA < x; i++) {
            if (diff[i] > 0) {
                totalProfit += diff[i];
                tasksToA++;
            } else {
                // Since it's sorted, if we hit a non-positive diff, 
                // no further switches will improve the profit.
                break;
            }
        }

        return (int)totalProfit;
    }
};