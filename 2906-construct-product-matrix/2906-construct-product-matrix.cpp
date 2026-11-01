class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int mod = 12345;
        vector<vector<int>> ans(m, vector<int>(n));
        long long prod = 1;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans[i][j] = prod;
                prod = (prod * grid[i][j]) % mod;
            }
        }
        prod = 1;
        for(int i = m-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                ans[i][j] = (ans[i][j] * prod) % mod;
                prod = (prod * grid[i][j]) % mod;
            }
        }
        return ans;
    }
};