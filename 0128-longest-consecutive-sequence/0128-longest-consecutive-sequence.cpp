class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size() ;

        unordered_set<int> s(nums.begin() , nums.end()) ; 
        int maxLen = 0 ;

        for(int x: s) {
            if(!s.contains(x-1)) {
                int len = 1 ;
                int curr = x ;
            
                while(s.contains(curr+1)) {
                    curr++ ;
                    len++ ;
                }
            maxLen = max( maxLen , len ) ;
            }
        }
        return maxLen ;
    }
};