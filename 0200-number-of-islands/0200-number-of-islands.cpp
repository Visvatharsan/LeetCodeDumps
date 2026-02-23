class Solution {

private:
    void dfs(int r, int c, vector<vector<char>>& g, vector<vector<int>>& vis) {

        vis[r][c] = 1;

        int m = g.size();
        int n = g[0].size();

        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};

        for(int i=0; i<4; i++){

            int nrow = r + dr[i];
            int ncol = c + dc[i];

            if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && !vis[nrow][ncol] && g[nrow][ncol] == '1'){

                dfs(nrow, ncol, g, vis);
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& g) {

        int m = g.size();
        int n = g[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0)); // m,n; 0?1.
        int cnt = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(g[i][j] == '1' && !vis[i][j]){

                    cnt++;
                    dfs(i,j,g,vis);

                }
            }
        }
        return cnt; 
    }
};