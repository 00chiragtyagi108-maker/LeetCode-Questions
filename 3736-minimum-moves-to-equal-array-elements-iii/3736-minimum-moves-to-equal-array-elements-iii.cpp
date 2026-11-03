class Solution {
public:
    int minMoves(vector<int>& nums) {
         
        int count = 0 ;
        int target = *max_element(nums.begin() , nums.end()) ;
        
        for(int x : nums) {
            count += (target - x) ;
        }
        return count ;
    }
};