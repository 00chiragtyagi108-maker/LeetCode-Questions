class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

     sort(nums.begin(), nums.end());

     int n = nums.size();
     int closest = nums[0] + nums[1] + nums[2]; // as initializing with INT_MAX and for a negative number it gets overflow

     for(int i = 0 ; i < n ; i++ ){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        int left = i+1;
        int right = n-1;

        while(left < right){
            int total = nums[left] + nums[i] + nums[right];

            if(abs(total-target) < abs(closest - target)) {
                closest = total ;
            }

            if(total == target) 
                return target ;
            
            if(total < target) 
                    left++ ;

            else
                right-- ;
            
        }        
    }
    return closest;
    }
};