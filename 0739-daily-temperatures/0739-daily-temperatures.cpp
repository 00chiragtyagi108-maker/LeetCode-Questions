class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> ans(n , 0) ;

        vector <int> st;
        int count = 0 ;

        for(int i = 0 ; i < n ; i++){

            while(!st.empty() && temperatures[st.back()] < temperatures[i]){
                
                int x = st.back() ;
                st.pop_back() ;

                ans[x] = i - x ; 
            }

            st.push_back(i) ;
        }
        return ans ;
    }
};