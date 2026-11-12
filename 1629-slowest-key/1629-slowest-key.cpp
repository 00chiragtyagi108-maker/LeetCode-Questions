class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        int n = releaseTimes.size() ;
        int longest = releaseTimes[0] ;
        char ans = keysPressed[0] ;

        for(int i = 1 ; i < n ; i++ ) {
            if((releaseTimes[i] -  releaseTimes[i-1]) > longest ) {
                longest = releaseTimes[i] -  releaseTimes[i-1] ;
                ans = keysPressed[i] ;
            }
            else if ((releaseTimes[i] -  releaseTimes[i-1]) == longest) {
                ans = max(ans , keysPressed[i]) ;
            }
        }
        return ans ;
    }
};