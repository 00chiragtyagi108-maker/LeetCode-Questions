class Solution {
public:
    string convert(string s, int numRows) {
    
        if(numRows == 1 || numRows >= s.size()) return s;

        int n = s.size();
        string ans = "";
        
        for(int i = 0 ; i < numRows; i++) {
            
            int increament = 2 * (numRows-1) ;
            
            for(int j = i ; j < n ; j += increament ) {
                ans += s[j] ;

                if(i > 0 && i < numRows - 1 && j + increament - 2 * i < n ) {
                    ans += s[j + increament - 2 * i] ;
                }
            }
        }
        return ans;
    }
};