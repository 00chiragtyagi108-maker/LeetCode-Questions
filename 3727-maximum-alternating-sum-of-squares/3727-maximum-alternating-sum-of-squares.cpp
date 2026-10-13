class Solution {
public:

    long long maxAlternatingSum(vector<int>& nums) { 

        int n = nums.size() ;

        sort(nums.begin() , nums.end(),[](auto a , auto b){
            return abs(a) < abs(b) ;
        }) ;

        int left = 0;
        int right = n-1 ;
        long long ans = 0 ;
        int sign = 1 ;

        while(left <= right ) {

            if(left == right ) {
                ans += 1LL * sign * nums[right]*nums[right] ;
                right-- ;
                break ;
            }

            ans += 1LL * sign * nums[right]*nums[right] ;
            sign *= -1 ;
            right-- ;

            ans += 1LL * sign *nums[left]*nums[left] ;
            sign *= -1 ;
            left++ ;
        }


        return ans ;
    }
};