class Solution {
public:

    int minBitFlips(int start, int goal) {
        
        bitset<31> Starts(start) ;
        bitset<31> Goals(goal) ;

        int count = 0 ;

        for(int i = 0 ; i < 31 ; i++) {
            if(Starts[i] != Goals[i]){
                count++ ;
            }
        }
        return count ;    
    }
};