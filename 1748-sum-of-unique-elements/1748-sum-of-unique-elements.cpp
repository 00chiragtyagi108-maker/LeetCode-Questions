class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int n = nums.size() ;

        vector<int> v(101 , 0) ;
        int sum = 0 ;

        for(int x: nums){
            v[x]++ ;
        } 

        for(int i = 0 ;i <= 100 ; i++) {
            if(v[i] == 1){
                sum += i ;
            }
        }
        return sum ;
    }
};