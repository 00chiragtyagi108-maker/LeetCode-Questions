class Solution {
public:
    int minMoves(vector<int>& nums) {
         
        int count = 0 ;
        int target = 0 ;

        for(int x: nums) {
            if(x > target) {
                target = x ;
            }
        }
        
        for(int x : nums) {
            count += (target - x) ;
        }
        return count ;
    }
};