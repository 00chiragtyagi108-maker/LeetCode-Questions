class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        
        int n = nums.size() ;
        int m = queries.size() ;

        vector<int> answer(m , -1) ;
        map<int , int> mp ;

        int occur = 0 ;
        int idx = 0 ;


        for(int i = 0 ; i < n ; i++) {
            if(nums[i] == x) {
                mp[idx+1] = i ;
                idx++ ;
                occur++ ;
            }
        }

        

        for(int i = 0 ; i < m ;i++ ) {
            if(mp.contains(queries[i])) {
                answer[i] = mp[queries[i]] ; 
            }
        }
        return answer ;
    }
};