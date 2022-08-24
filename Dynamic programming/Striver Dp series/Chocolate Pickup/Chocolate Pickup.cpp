typedef vector<vector<int>> vv;
typedef vector<vector<vector<int>>> vvv;

int maxChocoUtil(int i, int j1, int j2, int n, int m, vv &grid,vvv &dp) {
  if (j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
    return -1e9;

  if (i == n - 1) {
    if (j1 == j2)
      return grid[i][j1];
    else
      return grid[i][j1] + grid[i][j2];
  }

  if (dp[i][j1][j2] != -1)
    return dp[i][j1][j2];

  int maxi = INT_MIN;
  for (int di = -1; di <= 1; di++) {
    for (int dj = -1; dj <= 1; dj++) {
      int ans;
      if (j1 == j2)
        ans = grid[i][j1] + maxChocoUtil(i + 1, j1 + di, j2 + dj, n, m, grid, dp);
      else
        ans = grid[i][j1] + grid[i][j2] + maxChocoUtil(i + 1, j1 + di, j2 + dj, n,
        m, grid, dp);
      maxi = max(maxi, ans);
    }
  }
  return dp[i][j1][j2] = maxi;
}
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    int m = grid.size();
    int n = grid[0].size();
    
    vvv dp(m, vv (n, vector <int> (n, -1)));

     return maxChocoUtil(0, 0, n - 1, m, n, grid, dp);
}
