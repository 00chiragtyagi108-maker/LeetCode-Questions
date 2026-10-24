class Solution {
public:

    void helper(vector<int>& arr ,vector<int>& curr,  vector<vector<int>>& ans , vector<bool>& isUsed) {
        
        if(curr.size() == arr.size()) {
            ans.push_back(curr) ;
            return ;
        }

        for(int i = 0;i < arr.size() ; i++ ) {
            if(!isUsed[i]) {

                curr.push_back(arr[i]) ;
                isUsed[i] = true ;
                helper(arr , curr , ans , isUsed) ;

                curr.pop_back() ;
                isUsed[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result ;
        vector<int> curr ;
        vector<bool> Used(nums.size() , false ) ;

        helper(nums , curr , result , Used) ;

        return result ;
    }
};