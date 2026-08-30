class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size() ;
        if(n == 1 ) return 1;

        int mini = INT_MAX ;
        int maxi = INT_MIN ;
        int i_mini = -1;
        int i_maxi = -1;

        for(int i = 0; i < n ; i++){
           
            if(nums[i] < mini){
                mini = nums[i] ;
                i_mini = i;
            }
           
            if(nums[i] > maxi){
                maxi = nums[i] ;
                i_maxi = i;
            }
        }

        int left = min(i_mini , i_maxi);
        int right = max(i_mini , i_maxi);

        int ans = min({right + 1, n - left, left + 1 + n - right});
        return ans ;  
    }
};