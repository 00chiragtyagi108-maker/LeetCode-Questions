class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        int n = timeSeries.size() ;

        int tot_sec = 0 ;
        int i = 0 ;

        for( int i = 1 ; i < n  ;i++){

            int gap = timeSeries[i] - timeSeries[i - 1] ;

            if( gap <= duration ) {
                tot_sec += min(gap , duration) ;
            }
            else {
                tot_sec += duration ;
            }
        }
        
        tot_sec += duration ;
        
        return tot_sec ;
    }
};