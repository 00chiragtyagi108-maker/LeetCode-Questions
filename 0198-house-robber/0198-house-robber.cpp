class Solution {
public:

    int robHouse(vector<int>& arr , int idx , int n , vector<int>& dp ) {
        
        if(idx >= n ) return 0 ;

        if(dp[idx] != -1 ) return dp[idx] ;

        int take = arr[idx] + robHouse(arr , idx + 2 , n , dp ) ;
        int skip = robHouse(arr , idx + 1 , n ,  dp ) ;

        return dp[idx] = max(skip , take ) ;
    }
    int rob(vector<int>& nums) {
        
        int n = nums.size() ;

        vector<int> dp(n + 1 , -1) ;
        return robHouse(nums , 0 , n , dp) ;
    }
};