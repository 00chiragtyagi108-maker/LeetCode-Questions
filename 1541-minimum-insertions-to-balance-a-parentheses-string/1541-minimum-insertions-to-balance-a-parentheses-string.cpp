class Solution {
public:
    int minInsertions(string s) {
        
        int n = s.size() ;
        int count = 0 ;
        int require = 0 ;

        for(int i = 0 ; i < n ; i++ ) {
            if(s[i] == '(') {
                count++ ;
            }
            else{
                if(count > 0 ) {
                    count-- ;
                }
                else {
                    require++ ;
                }

                if(s[i+1] == ')') 
                    i += 1 ;

                else{
                    require += 1 ;
                }
            }
        }
        require += count*2 ;
        return require;
    }
};