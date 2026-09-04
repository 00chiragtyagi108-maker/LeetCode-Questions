class Solution {
public:

    int discountPrice(vector<int>&arr , int i){
        
            for(int j = i+1; j < arr.size();j++){
                if(arr[j] <= arr[i])
                    return arr[j] ; 
            }
        return 0 ;
    }
    vector<int> finalPrices(vector<int>& prices) {
        
        int n = prices.size() ;

        vector<int> answer(n) ;

        for(int i = 0 ; i < n ; i++ ){
            int value = prices[i] - discountPrice(prices,i);
            answer[i] = value ;
        }
        return answer ; 
    }
};