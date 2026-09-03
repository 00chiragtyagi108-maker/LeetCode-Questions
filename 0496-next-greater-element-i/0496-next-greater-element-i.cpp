class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();

        vector<int> aux(n, -1) ;
        vector<int> ans(nums1.size() , -1) ;
        stack<int> st ;

        for(int i = 0 ; i < n ; i++ ) {

            while(!st.empty() && nums2[st.top()] < nums2[i] ){
            
                    aux[st.top()] = nums2[i] ;
                    st.pop() ;
            }
            st.push(i) ;
        }

        for(int i = 0;i < nums1.size() ;i++){
            for(int j = 0; j < n; j++){
                if(nums1[i] == nums2[j]){
                    ans[i] = aux[j];
                    break ;
                }
            }
        }
        return ans ;
    }
};