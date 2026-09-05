class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();

        int i = 0;
        int p2 = 0;
        
        while(i < n) {

            int j = i ;

            while( j < n && s[j] != ' '){
                j++ ;
            }

            p2 = j ; 

            j-- ;

            while(i < j){
                swap(s[i] , s[j] ) ;
                
                i++ ;
                j-- ;
            }

            i = p2 + 1 ;
        }

        return s ;
    }
};