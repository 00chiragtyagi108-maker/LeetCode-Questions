class Solution {
public:

    int dfs(vector<vector<int>>& grid ,int n ,int m ,int r ,int c ,vector<vector<int>>& vis) {

        if(r < 0 || r >= n || c < 0 || c >= m) {
            return 1 ;
        }

        if(grid[r][c] == 0) return 1 ;
        
        if(vis[r][c]) return 0 ;

        vis[r][c] = 1 ;
        
        int perimeter= 0 ;

        perimeter += dfs(grid , n , m , r+1 , c , vis) ;
        perimeter += dfs(grid , n , m , r-1 , c , vis) ;
        perimeter += dfs(grid , n , m , r , c+1 , vis) ;
        perimeter += dfs(grid , n , m , r , c-1 , vis) ;

        return perimeter ;

    }

    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n = grid.size() ;
        int m = grid[0].size() ;

        vector<vector<int>> vis(n,vector<int>(m,0)) ;

        for(int i = 0 ; i < n ; i++ ) {
            for(int j = 0 ; j < m ; j++ ) {
                if(grid[i][j] == 1) {
                   return dfs(grid , n , m , i , j , vis) ;
                }
            }
        }
        return 0 ;
    }
};