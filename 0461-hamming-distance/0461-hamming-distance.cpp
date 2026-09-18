class Solution {
public:
    int hammingDistance(int x, int y) {
        
        bitset<31> X(x) ;
        bitset<31> Y(y) ;

        int diff = 0 ;

        for(int i = 0;i < 31 ; i++) {
            if(X[i] != Y[i])
                diff++ ;
        }
        return diff ;
    }
};