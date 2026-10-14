class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        string ans = "" ;

        int maximumSum = 9*num ; // as each digit can have 9 at max for large sum 

        if(sum > maximumSum) return "" ;

        vector<int> aux(10 , 0) ;

        int cpy = sum ;
        int digit = 9 ;

        while(cpy >= 9) {
            ans += '9' ;
            cpy -= 9 ;

        }

        if(cpy > 0) {
            ans += to_string(cpy);
        }

        while(ans.size() < num) {
            ans += '0' ;
        }
        
        return ans ;
    }
};