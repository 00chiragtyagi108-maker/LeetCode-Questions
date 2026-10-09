class Solution {
public:

    vector<vector<int>> ans ;
    vector<int> curr ;

    void solve(int n , int k , int num) {

        if(curr.size() == k) {
            ans.push_back(curr) ;
            return ;    
        }
        
        for(int i = num ; i <= n ; i++ ){   
            curr.push_back(i) ;

            solve(n , k , i + 1 ) ;

            curr.pop_back() ;
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        solve(n , k ,1) ;
        return ans ;
    }
};