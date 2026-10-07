class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<int> freq(201,0) ;

        for(int x:nums) {
            freq[x]++ ;
        }

        int maxElement = *max_element(freq.begin() , freq.end()) ;

        vector<vector<int>> ans (maxElement) ;

        for(int i = 0; i < 201; i++ ) {
            for(int j = 0; j < freq[i] ; j++) {
                ans[j].push_back(i) ;
            }
        }
        return ans ;
    }
};