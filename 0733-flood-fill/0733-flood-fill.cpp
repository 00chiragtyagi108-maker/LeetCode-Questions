class Solution {
public:

    vector<int> dr = {-1,1,0,0} ;
    vector<int> dc = {0,0,-1,1} ;
    vector<vector<int>>vis ;

    void dfs(vector<vector<int>>& image, int sr, int sc, int color , int original){

        vis[sr][sc] = 1 ;
        image[sr][sc] = color ;

        int n = image.size() ;
        int m = image[0].size() ;

        for(int i = 0 ; i < 4 ; i++ ) {

            int nr = sr + dr[i] ;
            int nc = sc + dc[i] ;


        
            if(nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] && image[nr][nc] == original){
                dfs(image , nr , nc ,color , original ) ;
            } 
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n = image.size() ;
        int m = image[0].size() ;

        int original = image[sr][sc] ;

        if(original == color ) return image ;

        vis = vector<vector<int>>(n , vector<int>(m , 0 )) ;

        dfs(image , sr , sc , color , original) ;
        
        return image ;
    }
};