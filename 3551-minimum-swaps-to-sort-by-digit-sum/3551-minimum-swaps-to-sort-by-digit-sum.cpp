class Solution {
public:

    int getDigitSum(int num) {
        int sum = 0 ;
        while(num != 0) {
            sum += (num % 10) ;
            num /= 10 ;
        }

        return sum ;
    }

    
    int minSwaps(vector<int>& nums) {

        int n = nums.size() ;

        vector<int> afterSort (nums) ;

        sort(afterSort.begin() , afterSort.end() ,[this](int num1 , int num2) {

            if(getDigitSum(num1) != getDigitSum(num2) ) {
                return getDigitSum(num1) < getDigitSum(num2) ; 
            }

            return num1 < num2 ;

        } ) ;

        unordered_map<int , int > valToIdx ;

        for(int i = 0 ; i < n ; i++ ) {
            valToIdx[nums[i]] = i ;
        }

        int swapCount = 0 ;

        for(int i = 0 ; i < n ; i++) {
            int expectVal = afterSort[i] ;
            int currVal = nums[i] ;

            if(expectVal == currVal ) 
                continue ;

            int idx = valToIdx[expectVal] ;


            nums[i] = expectVal ;
            nums[idx] = currVal ;

            valToIdx[expectVal] = i ;
            valToIdx[currVal] = idx ;

            swapCount++ ;
        }
        return swapCount ;
    }
};