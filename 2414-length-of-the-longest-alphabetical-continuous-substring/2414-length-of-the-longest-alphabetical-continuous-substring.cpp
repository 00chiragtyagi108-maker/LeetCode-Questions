class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int n = s.size() ;
        int count = 1 ;
        int maxLen = 1 ;

        for(int i = 1 ; i < n ; i++ ) {
            if(s[i] == s[i-1] + 1){
                if(count == 26)
                    return count ;
                count++ ;
            }

            else{ 
                count = 1 ;
                }
            maxLen = max(maxLen , count ) ;
        }
        return maxLen ;
    }
};