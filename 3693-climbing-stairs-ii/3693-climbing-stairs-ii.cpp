class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        
        vector<int> dp(n+1 , 0) ;

        for(int i = n - 1 ; i >= 0 ; i-- ) {

            int cost = INT_MAX ;

            int j = i + 1 ;
            if(j <= n ) 
                cost = dp[j] + costs[j - 1] + 1 ;

            j = i + 2 ;
            if(j <= n)
                cost = min( cost , dp[j] + costs[j - 1] + 4) ;

            j = i + 3 ;
            if(j <= n) 
                cost = min( cost , dp[j] + costs[j - 1] + 9) ;

            dp[i] = cost ;
        }
        return dp[0] ;  
    }
};