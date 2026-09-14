class Solution {
public:
    
    long long countCommas(long long n) {

        if(n < 1000)
            return 0 ;

        else if( n <= 999999LL ){
            long long aux = n - 1000; 
            return aux * 1 + 1 ; 
        }

        else if(n <= 999999999LL ){
            long long aux = n - 1000000LL; 
            return aux * 2 + 2 +(countCommas(999999LL)); 
        }

        else if(n <= 999999999999LL ){
            long long aux = n - 1000000000LL ; 
            return aux * 3 + 3 + (countCommas( 999999999LL)) ; 
        }

        else if(n <= 999999999999999LL) {
            long long aux = n - 1000000000000LL ; 
            return aux * 4 + 4 + (countCommas(999999999999LL)) ; 
        }
        
        else{
            return 5 + (countCommas(999999999999999LL)) ;
        }
    }
};