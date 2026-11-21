class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        if(n <= 2) return n;

        int left  = 2 ;
        int right = 2 ;

        while(right  < n ) {
            if(nums[right] != nums[left - 2]) {
                nums[left] = nums[right] ;
                left++ ;
                right++ ;
            }

            else{
                right++ ;
            }
        }
        return left ;
    }
};