class Solution {
public:

    vector<int> ans ;
    string s = "" ;
    void helper(int num , int open , int close , vector<string> &arr ) {

        if(open == num && close == num) {
            arr.push_back(s) ;
            return ;
        }

        if(open < num) {
            s += '(' ;
            helper(num , open + 1 , close , arr) ;
            s.pop_back() ;
        }

        if(close < open) {
            s += ')' ;
            helper(num , open , close + 1 , arr) ;
            s.pop_back() ; 
        }

    }

    vector<string> generateParenthesis(int n) {
        
        vector<string> ans ;
        helper( n , 0 , 0 , ans) ;
        return ans ;

    }
};