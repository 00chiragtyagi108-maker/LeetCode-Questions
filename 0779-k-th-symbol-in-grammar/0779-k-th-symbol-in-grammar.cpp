class Solution {
public:

    int select(char x) {
        if(x == '1')
            return 1 ;
        else 
            return 0 ;
    }

    char helper(int rowNum , int k ) {
        if(rowNum == 1) 
            return '0';
        
        else if(rowNum == 2 ) {
            string s = "01" ;
            return s[k-1] ;
        }

        
        int mid = pow(2,rowNum-2) ;

        if(k <= mid) {
            return helper(rowNum - 1 , k ) ;
        }

        else{
        char ans =  helper(rowNum - 1 , k - mid) ;
        if(ans == '0') 
            return '1' ;
        else 
            return '0' ;
        }
    }

    int kthGrammar(int n, int k) {
        
        char ans = helper(n , k) ;

        return select(ans) ;
    }
};