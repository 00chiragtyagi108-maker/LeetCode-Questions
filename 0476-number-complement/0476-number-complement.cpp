class Solution {
public:
    int decToBinSize ( int num) {
        string ans = "" ;

        while(num != 1){
            if(num % 2 == 1)
                ans += '1' ;
            else 
                ans += '0' ;
            
            num /= 2 ;
        }
        ans += '1' ;
        reverse(ans.begin(), ans.end()) ;
        return ans.size() ;
    }

    int findComplement(int num) {
        int size = decToBinSize(num) ;  
        unsigned int mask = (1u <<size ) - 1;

        return  num ^ mask ;
    }
};