class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n = nums.size() ;
        int total = 0;

        for(int i = 0;i < n;i++ ) {
            total += nums[i] ; 
        }

        int target = total - x ;

        if(target < 0) return -1 ;

        int maxi = -1    ;

        int left = 0;
        int right = 0 ;
        int sum = 0;
        while(right < n ) {
            sum += nums[right] ;

            while(sum > target){
                sum -= nums[left] ;
                left++ ;
            }

            if(sum == target) {
                    maxi = max(maxi,right - left + 1) ;
                }
                right++ ;

        }
        return maxi == -1 ? -1: n - maxi ;
    }
};