class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size() ;
        int maxMoney = 0 ;
        int difference = 0;

        for(int i = 1 ; i < n ; i++) {
            difference  = prices[i] - prices[i-1] ;

            if(difference > 0) {
                maxMoney += difference ;
            }
        }
        return maxMoney ;
    }
};