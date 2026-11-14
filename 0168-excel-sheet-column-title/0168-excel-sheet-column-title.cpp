class Solution {
public:
    string convertToTitle(int columnNumber) {

        string ans = "" ;
        while(columnNumber > 0 ) {
         
            int rem = (columnNumber - 1) % 26 ;
            char ch = 'A' + rem ;
            ans += ch ;
            columnNumber = (columnNumber - 1 ) / 26 ;

    }
    reverse(ans.begin() , ans.end()) ;
    return ans ;   

    }
};