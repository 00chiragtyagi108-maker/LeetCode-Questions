class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        //Max Subarray with sum = 0;

        int n = nums.size() ;

        int sum = 0 ;
        int maxLen = 0 ;

        unordered_map<int,int> mp ;
        mp[0] = -1 ;

        for(int right = 0 ; right < n; right++){
            
            if(nums[right] == 1) {
                sum++ ;
            }

            else{
                sum-- ;
            }

            if(mp.find(sum) != mp.end()) {
                maxLen = max(maxLen , right - mp[sum]) ;
            }

            else{
                mp[sum] = right ;
            }
        }

        return maxLen ;
    }
};