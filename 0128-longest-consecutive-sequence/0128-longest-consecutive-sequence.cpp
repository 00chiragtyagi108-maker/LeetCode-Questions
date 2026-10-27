class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size() ;
        int maxLen = 0;
        int len = 0 ;

        set<int> s ;
        
        for(int x: nums) {
           s.insert(x) ; 
        }

        for(int x: s) {
            if(!s.contains(x-1)) {
                len = 1 ;
            }
            else {
                len++ ;
            }
            maxLen = max( maxLen , len ) ;
        }
        return maxLen ;
    }
};