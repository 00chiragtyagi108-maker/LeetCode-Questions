class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int neg = 0;
        int count = 0 ;

        for(char ch: s) {
            if(ch == '(') 
                count++ ;

            else{
                count -- ;
            }

            if(count < 0) {
                neg ++ ;
                count = 0;
            }
        }
        return count + neg ;
    }
};