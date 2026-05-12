// https://www.geeksforgeeks.org/problems/range-lcm-queries3348/0

#include <vector>
#include <numeric>

using namespace std;

class Solution {
    vector<long long> tree;
    int n;

    // Helper function (Like your GF) to calculate GCD
    long long get_gcd(long long a, long long b) {
        while (b) {
            a %= b;
            swap(a, b);
        }
        return a;
    }

    // Helper to calculate LCM
    long long get_lcm(long long a, long long b) {
        if (a == 0 || b == 0) return 0;
        return (a / get_gcd(a, b)) * b;
    }

    void build(const vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
            return;
        }
        int mid = (start + end) / 2;
        build(arr, 2 * node, start, mid);
        build(arr, 2 * node + 1, mid + 1, end);
        tree[node] = get_lcm(tree[2 * node], tree[2 * node + 1]);
    }

    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
            return;
        }
        int mid = (start + end) / 2;
        if (idx <= mid) update(2 * node, start, mid, idx, val);
        else update(2 * node + 1, mid + 1, end, idx, val);
        tree[node] = get_lcm(tree[2 * node], tree[2 * node + 1]);
    }

    long long query(int node, int start, int end, int L, int R) {
        if (R < start || end < L) return 1; // Neutral element for LCM
        if (L <= start && end <= R) return tree[node];
        
        int mid = (start + end) / 2;
        long long p1 = query(2 * node, start, mid, L, R);
        long long p2 = query(2 * node + 1, mid + 1, end, L, R);
        return get_lcm(p1, p2);
    }

public:
    vector<long long> RangeLCMQuery(vector<int> &arr, vector<vector<int>> &queries) {
        n = arr.size();
        tree.assign(4 * n, 0);
        build(arr, 1, 0, n - 1);

        vector<long long> results;
        for (const auto& q : queries) {
            if (q[0] == 1) {
                // Update ksro Query  [1, index, value]
                update(1, 0, n - 1, q[1], q[2]);
            } else {
                // Range Query  [2, L, R]
                results.push_back(query(1, 0, n - 1, q[1], q[2]));
            }
        }
        return results;
    }
};