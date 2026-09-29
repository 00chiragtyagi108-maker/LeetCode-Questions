class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> ans(n , 0) ;

        stack <int> st;
        int count = 0 ;

        for(int i = 0 ; i < n ; i++){

            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                
                int x = st.top() ;
                st.pop() ;

                ans[x] = i - x ; 
            }

            st.push(i) ;
        }
        return ans ;
    }
};