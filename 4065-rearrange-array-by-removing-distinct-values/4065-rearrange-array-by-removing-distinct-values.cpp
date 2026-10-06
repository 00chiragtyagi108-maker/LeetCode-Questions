class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        map<int , int> mp ;

        for(int x:nums) {
            mp[x]++ ;
        }

        vector<pair<int , int >> freq (mp.begin() , mp.end());
        vector<int> ans ;

        int remaining = nums.size() ;

        while(remaining > 0){    
            for(auto &it: freq){
                if(it.second > 0) {
                    ans.push_back(it.first) ;
                    it.second-- ;
                    remaining-- ;
                }
            }
            
        }
        return ans ;
    }
};