class Solution {
public:
    int maxDistinct(string s) {
        
        vector<int> v(26,0) ;
        for(char ch: s) {
            v[ch - 'a']++ ;
        }

        int count = 0 ;
        for(int x : v) {
            if(x != 0)
                count++ ;
        }
        return count ;
    }
};