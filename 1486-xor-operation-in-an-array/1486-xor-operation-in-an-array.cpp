class Solution {
public:
    int xorOperation(int n, int start) {
        
        int x0r = 0 ;
        for(int i = 0; i < n ; i++ ) {
            x0r = x0r ^ (start + 2 * i) ;
        }
        return x0r ;
    }
};