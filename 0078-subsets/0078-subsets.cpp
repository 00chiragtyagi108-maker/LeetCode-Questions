class Solution {
public:

    vector<vector<int>> makeSubset(vector<int>& arr, int ind , int size, vector<int>& subsetVector){
        
        
        if(size == ind){

            return{ subsetVector };
        
        }
        
        subsetVector.push_back(arr[ind]) ;
        vector<vector<int>> included = makeSubset(arr, ind + 1 , size , subsetVector);

        subsetVector.pop_back() ;
        vector<vector<int>> excluded = makeSubset(arr, ind + 1, size , subsetVector);
        
        included.insert(included.end() , excluded.begin() , excluded.end() ) ;
        return included ;
        }

    
    vector<vector<int>> subsets(vector<int>& nums) {

        int n = nums.size() ;
        vector<vector<int>> ans ;
        int i = 0;
        vector<int> aux ;

        ans = makeSubset(nums , i , n , aux) ;

        return ans;

    }
};