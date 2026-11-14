class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int n = columnTitle.size() ;
        int i = 0 ;
        int ans = 0 ;

        while(i < n ) {

            int value =  columnTitle[i] - 'A' + 1;
            ans = ans* 26 + value ;
            i++ ;
        }
        return ans ;
    }
};