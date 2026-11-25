class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin() , boxTypes.end() , [] (vector<int> a , vector<int> b)  {
            return a[1] > b[1]  ;
        } ) ;

        int capacity = truckSize ;
        int count = 0 ;

        for(auto x : boxTypes) {
            if(capacity != 0 ) {
                int take = min(x[0] , capacity) ;
                count += take * x[1] ;
                capacity -= take ;
            }
        }
        return count ; 
    }
};