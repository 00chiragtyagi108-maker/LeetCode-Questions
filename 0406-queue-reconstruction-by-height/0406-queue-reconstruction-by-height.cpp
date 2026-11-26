class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        sort(people.begin() , people.end() , [] (vector<int>& a , vector<int>& b) {
            if(a[0] == b[0])
                return a[1] < b[1] ;
            
            else
                return a[0] > b[0] ;    
        }) ;

        vector<vector<int>> ans ;

        for(int i = 0 ; i < people.size() ; i++){
            int k = people[i][1] ;
            ans.insert(ans.begin() + k , people[i]) ;
        }
        return ans ;
    }
};