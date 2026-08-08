class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
        int n = candies.size();
        vector<bool> result(n,false);
        int most = 0;

        for(int x: candies){
            if(x > most){
                most = x;
            }
        }

        for(int i = 0; i < n;i++){
            if(candies[i] + extraCandies >= most)
                result[i] = true;
            
            else
                result[i] = false;
        }
        return result;
    }
};