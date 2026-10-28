class Solution {
public:

    vector<int> separateDigits(vector<int>& nums) {
        
        reverse(nums.begin() , nums.end() ) ;
        vector<int> ans ;

        for(int num : nums ) {
            while(num != 0) {
                ans.push_back(num % 10 ) ;
                num /= 10 ;
            }
        }
        reverse(ans.begin() , ans.end() ) ;
        return ans ;
    }
};