class Solution {
public:
    int distMoney(int money, int children) {
        
        int ans = 0 ;

        if(money < children ) return -1 ;

        money -= children ;
        
        while(money >= 7 && children > 0) {
            money -= 7 ;
            children-- ;
            ans++ ;
        }

        if(children == 0 && money > 0 ) ans -= 1 ;
        if(children == 1 && money == 3) ans -= 1 ;

        return ans ; 
    }
};