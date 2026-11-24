class Solution {
public:
    int maxLength(vector<int>& nums) {
        
        int n = nums.size() ;
        int ans = 0 ;

        for(int i = 0 ; i < n ;i++) {

            long long product  = 1  ;
            long long lc = 1 ;
            long long gc = 0 ;

            for(int j = i ; j < n ;j++) {

                gc = gcd(gc , (long long)nums[j]) ;
                lc = (lc / gcd(lc , (long long)nums[j]) )* nums[j] ;

                if(product > LLONG_MAX / nums[j] ) break ;
                    
                    product *= nums[j] ;


                if(lc > LLONG_MAX / gc) break ;


                if(product == lc * gc) {
                    ans = max(ans , j - i + 1) ;
                }
            }
        }
        return ans ;
    }
};