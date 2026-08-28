class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int n = heights.size() ;
        vector<int> copy = heights ;

        sort(heights.begin() , heights.end()) ;
        int diff = 0 ;


        for(int i = 0;i < n; i++){
            if(heights [i] != copy[i]){
                diff++ ;
            }
        }
        return diff ;
    }
};