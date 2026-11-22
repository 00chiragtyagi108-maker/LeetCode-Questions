class Solution {
public:
    bool checkString(string s) {

        int n = s.size();
        int b = 0;  
        
        for(char ch:s){
            if(ch == 'a') {
                if(b != 0)
                return false;
            }
            else
                b++;
        }
        return true;
    }
};