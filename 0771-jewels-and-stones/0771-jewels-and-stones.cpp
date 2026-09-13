class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        vector<int> arr(52,0);

        for(char ch: jewels){
            if(ch >= 'A' && ch <= 'Z'){
                arr[ch - 'A']++ ;
            }
            else if(ch >= 'a' && ch <= 'z') {
                arr[ch - 'a' + 26]++ ;
            }
        }

        int count = 0;

        for(char xch : stones ){
            if(xch >= 'A' && xch <= 'Z') {
                if(arr[xch - 'A'] > 0)
                    count++;
            }
            else {
                if(arr[xch - 'a' + 26] > 0)
                    count++;
            }
        }
    return count ;
    }
};