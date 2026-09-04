class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size() ;
        int maxi = INT_MIN ;

        for(int i = 0;i < n;i++){

            if(maxi < nums[i]){
                maxi = nums[i] ;
            }

            int minVal = *min_element(nums.begin()+i, nums.end()) ;


            int stable = maxi - minVal ;
            
            if(stable <= k)
                return i ;

        }
        return -1 ;

    }
};