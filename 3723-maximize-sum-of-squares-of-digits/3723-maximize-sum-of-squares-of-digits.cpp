class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        // as each digit can have 9 at a place for maximumSum so sum should be less than 9 * num

        if(sum > 9 * num) return "" ;

        
        string ans = "" ;

        while(sum >= 9) {
            ans += '9' ;
            sum -= 9 ;

        }

        if(sum > 0) {
            ans += to_string(sum);
        }

            ans += string(num - ans.size() ,'0' ) ;

        return ans ;
    }
};