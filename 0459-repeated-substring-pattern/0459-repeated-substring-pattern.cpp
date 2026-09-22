class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size() ;

        int i = 1;

        while(i <= n/2 ) {

            if(n % i != 0){
                i++ ;
                continue ;
            }

            bool flag = true ;

            for(int j = i ; j < n ; j++) {
                if(s[j] != s[j % i ]) {
                    flag = false ;
                    break ;
                }
            }
            if(flag) return true ;

            i++ ;
        
        }
        return false ;
    }
};