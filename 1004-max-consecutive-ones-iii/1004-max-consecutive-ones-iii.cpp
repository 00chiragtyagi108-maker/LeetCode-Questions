class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        int left = 0;
        int right = 0;
        int max_len = 0;
        int aux = 0;

        while(right < n){
            if(nums[right] == 0){
                aux++;

                while(aux > k){
                    if(nums[left] == 0){
                        aux--;
                    }
                    left++;
                }
            }

            max_len = max(max_len, right - left + 1);
            right++;
        }
        return max_len;
    }
};