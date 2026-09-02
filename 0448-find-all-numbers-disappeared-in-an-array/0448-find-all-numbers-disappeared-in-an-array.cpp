class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size() ;
        vector<bool> aux(n , false);
        vector<int> ans ;

        for(int i = 0; i < n;i++ ){
            aux[nums[i] - 1] = true;
        }

        for(int i = 0;i < n; i++){
            if(aux[i] == false){
                ans.push_back(i+1) ;
            }
        }
        return ans;
    }
};