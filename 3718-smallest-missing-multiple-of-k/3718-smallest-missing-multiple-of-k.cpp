class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int> s;

        for(int x: nums){
            s.insert(x);
        }

        int i = 1 ;
        int p = 1 ;
        while(i < 101 ){
            p = i * k ;
            
            if( s.count(p)){
                i++;
                continue ;
                }

            else{
                return p ;
            }
        }
        return p + k ;
    }
};