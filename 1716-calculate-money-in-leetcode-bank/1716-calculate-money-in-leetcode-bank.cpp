class Solution {
public:
    int totalMoney(int n) {
        
        int monday = 1 ;
        int savings = 0 ;


        for(int i = 0 ; i < n ; i++) {
            
            savings = savings + (monday + (i % 7)) ;

            if((i+1) % 7 == 0)
                monday++ ;

        }
        return savings ;
    }
};