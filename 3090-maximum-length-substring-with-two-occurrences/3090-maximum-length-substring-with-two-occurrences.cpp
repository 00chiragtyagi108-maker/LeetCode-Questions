class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        int n = s.size();
        int length = 0 ;
        int maxi = INT_MIN ;

        int left = 0;
        vector<int> aux (26 , 0);

        for(int right = 0; right < n; right++){

            aux[s[right] - 'a']++ ;
            
            while(aux[s[right] - 'a'] > 2){
                aux[s[left] - 'a']--;
                left++;
                length-- ;
            }
            length++;

            maxi = max(length, maxi);
        }
        return maxi;
    }
};