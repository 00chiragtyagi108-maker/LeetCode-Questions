class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int n = s.size() ;

        int left = 0 ;
        int co = 0 ;
        int ms = 0 ;
        int me = 0 ;
        int minlen = INT_MAX ; 
        int len = 0;

        for(int right = 0;right < n; right++){
            if(s[right] == '1'){
                co++;
                if(co == k){

                    while( left <= right && s[left] == '0'){
                        left++ ;
                    }
                
                    len = right - left + 1 ;

                    if(len < minlen || ((len == minlen) && s.substr(left , len) < s.substr(ms , minlen))){

                        ms = left ;
                        me = right ;
                        minlen = len ;
                    
                    }
                    left ++;
                    co-- ;
                }

            }
        }
        string ans = s.substr(ms,minlen);

        return (minlen == INT_MAX? "":ans);
    }
};