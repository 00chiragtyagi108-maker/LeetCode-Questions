class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size() ;
        int m = nums2.size() ;

        map<int,int> mp1 ;
        map<int,int> mp2 ;

        for(int i = 0 ; i < n;i++) {
            mp1[nums1[i]] ++ ;
        }

        for(int i = 0 ; i < m;i++) {
            mp2[nums2[i]] ++ ;
        }

        vector<int> ans ;

        for(auto x: mp1){

            if(mp2.find(x.first) != mp2.end()){

                int freq = min(x.second, mp2[x.first]) ;

                for(int j = 0;j < freq ;j++){
                ans.push_back(x.first) ;
            }
        }
            
        }
        return ans ;
    }
};