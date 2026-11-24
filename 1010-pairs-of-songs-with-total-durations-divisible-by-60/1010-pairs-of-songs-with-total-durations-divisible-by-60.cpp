class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int n = time.size() ;
        int count = 0 ;
        vector<int > freq(60 , 0) ;

        for(int i = 0 ; i < n ; i++) {
           
            int remainder = time[i] % 60 ;

            int required = (60 - remainder ) % 60 ;
            
            count += freq[required] ; 
            freq[remainder]++ ;
        
        }

        return count ;
    }
};