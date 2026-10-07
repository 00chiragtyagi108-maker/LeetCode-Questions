class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        

        vector<vector<int>> ans ;
        vector<int> freq(201,0) ;
        vector<int> v ;

        for(int x:nums) {
            freq[x]++ ;
        }

        int remaining = nums.size() ;

        while(remaining > 0) {
            for(int i = 0; i < freq.size(); i++ ) {
                if(freq[i] != 0) {
                    v.push_back(i) ;
                    freq[i]-- ;
                    remaining-- ;
                }
            }
            ans.push_back(v) ;
            v.clear() ;
        }
        return ans ;
    }
};