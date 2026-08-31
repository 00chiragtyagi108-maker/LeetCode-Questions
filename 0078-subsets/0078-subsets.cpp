class Solution {
public:

    void makeSubset(vector<int>& arr, int ind , vector<vector<int>>& ans, vector<int>& subset){
        
        
        if(ind == arr.size()){
            ans.push_back(subset) ;
            return ;
        
        }
        
        subset.push_back(arr[ind]) ;
        makeSubset(arr, ind + 1 , ans , subset);

        subset.pop_back() ;
        makeSubset(arr, ind + 1, ans , subset);
        
        }

    
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans ;
        vector<int> subset ;

        makeSubset(nums , 0 , ans , subset) ;

        return ans;

    }
};