class Solution {
public:

    const  int MOD = 1e9+7 ;

    int maxSum(vector<int>& nums, int k) {
        vector<int> count(32,0) ;

        for(int &num : nums) {
            for(int b = 0; b < 32 ; b++) {
                if(num & 1LL << b) {
                    count[b]++ ; // found a 1 at the bit position b
                }
            }
        }
        long long result = 0 ;

        while(k--) {
            long long curr = 0 ;

            for(int b = 0 ; b < 32 ; b++) {
                if(count[b]) {
                    count[b]-- ;
                    curr = curr | (1LL <<b) ;
                }
            }
            result = (result + (curr*curr)) % MOD ;
        }
        return result ;
    }
};