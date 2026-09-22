class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        sort( nums.begin() , nums.end() );

        unsigned int xor1 = 0 ;
        int sz = nums.size() ;

        for(int i = 0 ; i < sz ; i++ ) {
            xor1 = xor1 ^ nums[i] ;
        }
        unsigned int n = xor1 & (-xor1) ;

        int ans1 = 0 ;
        int ans2 = 0 ;


        for(int num: nums) {
            if( num & n ) {
                ans1 = ans1 ^ num ;
            }
            else{
                ans2 = ans2 ^ num ;
            }
        }
        return { ans1 , ans2 } ;
    }
};