class Solution {
public:
    vector<int> countBits(int n) {

     vector<int> ans(n+1 , 0) ;
     ans[0] = 0;


    for(int i = 1; i <= n ; i++ ) {
        int cp = i ;
        int cnt = 0 ;
        while(cp) {
            cp = (cp) & (cp - 1) ;
            cnt++ ;
        }
        ans[i] = cnt ;
    }

    return ans ;   
    }
};