class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector <int> arr1 ;
        vector <int> arr2;

        if(nums.size() <= 2) return nums;

        arr1.push_back(nums[0]) ;
        arr2.push_back(nums[1]) ;
        int i = arr1.size() - 1;
        int j = arr2.size() - 1;

        for(int x = 2 ; x < nums.size() ; x++){
            if(arr1[i] > arr2[j]){
                arr1.push_back(nums[x]) ;
                i++ ;
            }
            else{
                arr2.push_back(nums[x]) ;
                j++;
            }
        }
        arr1.insert( arr1.end() , arr2.begin() , arr2.end() );
        return arr1 ;
    }
};