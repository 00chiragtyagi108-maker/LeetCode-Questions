class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int n = nums.size() ;
        int sum = 0 ;
        int minElement = INT_MAX ;

        for(int i = 0 ; i < n ; i++ ) {
            sum += nums[i] ;
            minElement = min( minElement , nums[i] ) ;
        }
        return sum - ( n * minElement) ;
    }
};