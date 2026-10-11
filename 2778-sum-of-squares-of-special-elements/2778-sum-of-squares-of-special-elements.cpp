class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int n = nums.size() ;
        int specialSum = 0;

        for(int i = 0 ; i < n ; i++) {
            if(n % (i+1) == 0) {
                specialSum += nums[i] * nums[i] ;
            }
        }
        return specialSum ;
    }
};