class Solution {
public:

    void findSubset(vector<int>& arr , int idx , set<vector<int>>& ans , vector<int>& subset) {

        if(idx == arr.size()) {
            ans.insert(subset) ;
            return ;
        }

        subset.push_back(arr[idx]) ;
        findSubset(arr , idx + 1 , ans , subset) ;

        subset.pop_back() ;
        findSubset(arr , idx + 1 , ans , subset) ;
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin() , nums.end()) ;
        set<vector<int>> aux ;
        vector<int> temp ;
        findSubset(nums , 0 , aux , temp ) ;

        vector<vector<int>> ans(aux.begin() , aux.end()) ;

        return ans ;
    }
};