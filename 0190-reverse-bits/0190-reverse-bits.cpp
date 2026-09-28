class Solution {
public:

    string decToBin(int num) {
        string bits = "" ;

        for(int i = 31 ; i >= 0 ; i--) {
            bits += ((num >> i) & 1) + '0' ;
        }

        return bits ; 
    }

    int binToDec(string binNum) {
        
        int value = 0 ;
        for(char ch: binNum) {
            value = value * 2 + ( ch - '0' ) ;
        } 

        return value ;
    }

    int reverseBits(int n) {
        
        string x = decToBin( n ) ;

        reverse(x.begin() , x.end()) ;

        int ans = binToDec(x) ;

        return ans ;
        
    }
};