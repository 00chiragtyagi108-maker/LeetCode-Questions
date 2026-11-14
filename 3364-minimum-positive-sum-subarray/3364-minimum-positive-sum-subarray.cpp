
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int n = nums.size();

        int ans = -1;

        for(int left = 0; left < n; left++) {

            int subSum = 0;

            for(int right = left; right < n && right - left + 1 <= r; right++) {

                subSum += nums[right];

                if((right - left + 1) >= l && subSum > 0) {
                    if(ans == -1 || subSum < ans) {
                        ans = subSum;
                    }
                }
            }
        }

        return ans;
    }
};
