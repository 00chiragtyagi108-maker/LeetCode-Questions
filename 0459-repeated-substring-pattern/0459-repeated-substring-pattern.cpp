class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size() ;

        int i = 1;

        while(i <= n/2 ) {

            string ans = "" ;

            for(int j = 0 ; j < n/i ; j++ ) {
                ans += s.substr(0,i) ;
                if(ans == s){
                    return true ;
                }
            }
            i++ ;
        }
        return false ;
    }
};