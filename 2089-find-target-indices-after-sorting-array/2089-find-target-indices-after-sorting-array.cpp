class Solution {
public:
    
    int binarySearch(vector<int>& nums, int target){
       
        int right = nums.size()-1;
        int left = 0;  

        while(left<=right){
            int mid = left + (right - left)/2;

            if(nums[mid] == target) return mid;

            else if(nums[mid]< target) left = mid+1;

            else right = mid-1;
         }
         return -1;
    }

    vector<int> targetIndices(vector<int>& nums, int target) {

     vector<int> Indecis;

     sort(nums.begin(),nums.end());

     int first = binarySearch(nums, target);
     
     if(first == -1) return {};

     while(first > 0 && nums[first - 1] == target)
        first--;

    int i = first;

     
     while(i < nums.size() && nums[i]== target){
        Indecis.push_back(i);
        i++;
     }
      
     return Indecis;
    }
};