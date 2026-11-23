class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(n == 0 ) return true ;
        int sz = flowerbed.size() ;
        int canBe = 0 ;

        for(int i = 0 ; i < sz ; i++ ) {
            if(i == 0 && flowerbed[i] == 0 && (sz == 1 || flowerbed[i+1] == 0 )) {
                canBe++ ;
                flowerbed[i] = 1 ;
            }

            else if( i == sz-1 && flowerbed[sz-1] == 0 && flowerbed[sz-2] == 0) {
                canBe++ ;
                flowerbed[i] = 1 ;
            }

            else if( i > 0 && i < sz-1 && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 ) {
                canBe++ ;
                flowerbed[i] = 1 ;
            }
        }
        return canBe >= n ;
    }
};