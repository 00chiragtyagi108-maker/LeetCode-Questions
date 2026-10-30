class Solution {
public:

    string makeStr(int i , string str , int count ) {
        if(i >= str.size())
            return "" ;

        if(i + count < str.size() && str[i] == str[i+count]){
            return makeStr(i , str , count+1) ;
        }

        return to_string(count) + str[i] + makeStr(i+count , str , 1) ;
    }

    string countAndSay(int n) {
        if(n == 1) return "1" ;

        string s = countAndSay(n-1) ;

        return makeStr(0 , s , 1) ;
    }
};