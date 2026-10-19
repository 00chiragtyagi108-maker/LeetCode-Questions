class Solution {
public:
  
    vector<int> targetIndices(vector<int>& nums, int target) {

        int count1 = 0 ;  // number of elements less than target
        int count2 = 0 ;  // no of elements equal to target 

        for(int &num: nums) {
            if(num < target) {
                count1++ ;
        }
            else if(num == target) {
                count2++ ;
            }
        }

        vector<int> result ;
        for(int idx = count1 ; idx < count1 + count2 ; idx++) {
            result.push_back(idx) ;
        }
    return result ; 
    }
};