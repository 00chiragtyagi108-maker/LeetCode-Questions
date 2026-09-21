class Solution {
public:
    string deciToBin(int n){
        string ans = "" ;

        while(n != 1) {
            if(n%2 == 1){
                ans += '1' ;
            }
            else {
                ans += '0' ;
            }
            n = n/2 ;
        }
        ans += '1' ;
        reverse(ans.begin() , ans.end() ) ;
        return ans ;
    }

    bool hasAlternatingBits(int n) {
        
        string temp = deciToBin(n) ;
        int sz = temp.size() ;

        for(int i = 0 ; i < sz - 1 ; i++) {

            if(temp[i] == temp[i+1]) return false ;
        }
        return true ;
    }
};