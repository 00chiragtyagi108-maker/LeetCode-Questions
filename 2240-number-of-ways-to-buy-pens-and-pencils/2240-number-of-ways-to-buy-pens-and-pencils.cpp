class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {

        long long count = 0;

        for(int i = 0 ; i <= total/cost1 ; i++ ) {
            int remaining = total - ( i * cost1) ;
            int pencils = remaining / cost2 ;
            count += pencils + 1 ;
        }
        return count ;
    }
};