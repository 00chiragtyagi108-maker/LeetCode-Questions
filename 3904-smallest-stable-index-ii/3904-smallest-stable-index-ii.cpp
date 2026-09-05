class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size() ;
        int maxi = INT_MIN ;

        vector<int> suffixMin(n) ;
        suffixMin[n-1] = nums[n-1];

        for(int k = n-2 ; k >= 0 ; k-- ){
            suffixMin[k] = min(nums[k] , suffixMin[k+1]) ;
        }

        for(int i = 0;i < n;i++){
            
            if( maxi < nums[i] ){
                maxi = nums[i];
            }

            int stable = maxi - suffixMin[i] ;
            
            if( stable <= k) {
                return i ;
            }

        }
        return -1 ;
    }
};