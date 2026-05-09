// Question https://www.geeksforgeeks.org/problems/total-number-of-spanning-trees-in-a-graph/1

// class Solution {
// public:
//     static const long long MOD = 1000000007LL;

//     // Fast modular exponentiation — O(log exp)
//     long long power(long long base, long long exp, long long mod) {
//         long long result = 1;
//         base %= mod;
//         while (exp > 0) {
//             if (exp & 1LL) result = result * base % mod;
//             base = base * base % mod;
//             exp >>= 1;
//         }
//         return result;
//     }

//     // Modular inverse via Fermat's little theorem (MOD must be prime)
//     long long modInv(long long a, long long mod) {
//         return power(a % mod, mod - 2, mod);
//     }

//     int countSpanTree(int n, vector<vector<int>>& edges) {
//         // Edge case: single vertex has exactly 1 spanning tree (itself)
//         if (n == 1) return 1;

//         // ── Step 1: Build Laplacian matrix 
//         // Dimensions: n×n, all values under MOD
//         vector<vector<long long>> L(n, vector<long long>(n, 0LL));

//         for (vector<int>& e : edges) {
//             int u = e[0], v = e[1];
//             if (u == v) continue;           // self-loops don't affect spanning trees
//             L[u][u] = (L[u][u] + 1) % MOD;
//             L[v][v] = (L[v][v] + 1) % MOD;
//             // Add MOD to avoid negative values in modular field
//             L[u][v] = (L[u][v] + MOD - 1) % MOD;
//             L[v][u] = (L[v][u] + MOD - 1) % MOD;
//         }

//         // Step 2: Extract (n-1)×(n-1) submatrix (drop last row + col) 
//         int m = n - 1;
//         vector<vector<long long>> mat(m, vector<long long>(m));
//         for (int i = 0; i < m; i++)
//             for (int j = 0; j < m; j++)
//                 mat[i][j] = L[i][j];       // already in [0, MOD)

//         //  Step 3: Gaussian elimination → determinant mod MOD 
//         // O(m^3) = O(n^3)
//         long long det = 1LL;

//         for (int col = 0; col < m; col++) {
//             // Pivot search — find first non-zero entry in this column
//             int pivot = -1;
//             for (int row = col; row < m; row++) {
//                 if (mat[row][col] != 0) { pivot = row; break; }
//             }

//             // Zero pivot ⟹ singular matrix ⟹ 0 spanning trees
//             if (pivot == -1) return 0;

//             // Row swap; determinant flips sign
//             if (pivot != col) {
//                 swap(mat[pivot], mat[col]);
//                 det = (MOD - det) % MOD;
//             }

//             // Accumulate diagonal into determinant
//             det = det * mat[col][col] % MOD;

//             // Eliminate entries below pivot
//             long long inv = modInv(mat[col][col], MOD);
//             for (int row = col + 1; row < m; row++) {
//                 if (mat[row][col] == 0) continue;
//                 long long factor = mat[row][col] * inv % MOD;
//                 for (int k = col; k < m; k++) {
//                     mat[row][k] = (mat[row][k] - factor * mat[col][k] % MOD + MOD) % MOD;
//                 }
//             }
//         }

//         return (int)(det % MOD);
//     }
// };

