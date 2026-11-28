class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int n = piles.size() ;

        sort(piles.begin() , piles.end()) ;
        
        int i = 0 ; 
        int j = n-2 ;

        int count = 0 ;

        while(i < j) {
            count += piles[j] ;
            j -= 2 ;
            i++ ;
        }
        return count ;
    }
};