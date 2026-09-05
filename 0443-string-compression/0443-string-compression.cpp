class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();

        if(n == 1)
            return 1 ;

        int count = 1 ;
        int write = 0;

        for(int i = 0 ; i < n ;){
            
            while( i < n - 1 && chars[i] == chars[i+1]) {
                count++ ;
                i++ ;
            }      
            chars[write] = chars[i];
            i++ ;
            write++ ;

            if(count > 1){
                string num = to_string(count);
                for(char c : num){
                    chars[write++] = c; 
                }
            }
            count = 1 ;
         }
         return write ;
    }
};