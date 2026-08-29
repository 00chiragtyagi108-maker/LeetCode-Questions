class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map< int , int > count;

        for(int num : arr1) {
            count[num]++ ;
        }

        vector< int > result ;

        for( int num: arr2 ){
            while( count[num] > 0 ){
                result.push_back(num) ;
                count[num]-- ;
            }
        }

        vector<int> remaining ;

        for(auto [num,freq] : count){
            while(freq > 0){
                remaining.push_back(num) ;
                freq-- ;
            }
        }

        sort(remaining.begin() , remaining.end()) ;
        result.insert(result.end() , remaining.begin() , remaining.end());
        return result ;
    }
};