class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        int n = nums.size() ;

        for(int i = 0 ; i < n ; i++) {

            int cp = nums[i] ;
            int sum = 0;

            while(cp) {
                int p = cp % 10 ;
                sum += p ;
                cp /= 10 ;
            }

            if( sum == i) return i ;
        }
        return -1 ;
    }
};