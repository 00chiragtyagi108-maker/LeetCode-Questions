class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        
        int n1 = s1.size() ;
        int n2 = s2.size() ;
        int n3 = s3.size() ;

        int count = 0 ;

        int minis = min(n1 , min( n2 , n3 ) ) ;

        for(int i = 0 ; i < minis ; i++) {
            if(s1[i] != s2[i] || s1[i] != s3[i] )
                break ;
            
            else {
                count++ ;
            }
        }
        
        return count== 0? -1 : (n1 - count) + (n2 - count) + (n3 - count) ;
    }
};