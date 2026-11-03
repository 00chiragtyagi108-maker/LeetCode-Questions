class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        
        int n = nums.size() ;
        int m = queries.size() ;

        vector<int> answer(m , -1) ;
        vector<int> temp ;

        for(int i = 0 ; i < n ; i++) {
           
            if(nums[i] == x)
                temp.push_back(i) ;
        
        }

        

        for(int i = 0 ; i < m ;i++ ) {
            if(queries[i] <= temp.size() && queries[i] > 0) {
                answer[i] = temp[queries[i] - 1] ; 
            }
        }
        return answer ;
    }
};