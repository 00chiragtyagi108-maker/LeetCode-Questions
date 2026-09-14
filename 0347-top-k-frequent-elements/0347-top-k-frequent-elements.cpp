class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size() ;

        map<int , int> mp ;
        
        for(int x: nums){
            mp[x]++ ;
        }  

        vector<pair<int , int>> v(mp.begin() , mp.end()) ;

        sort(v.begin() , v.end() , [](pair<int,int> a, pair<int,int> b){
            return a.second > b.second ;
        }) ;

        vector<int> sub ;
            for(int i = 0;i < k;i++){
                sub.push_back(v[i].first) ;
            }
        return sub ;
    }
};