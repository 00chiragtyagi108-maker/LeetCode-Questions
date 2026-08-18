class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int n = ransomNote.size() ;
        int m = magazine.size() ;

        if(n > m ) return false;

        vector<int> aux (26,0);

        for(char ch : magazine){
            aux[ch - 'a']++ ;
        }

        for(char ch : ransomNote){
            aux[ch - 'a'] -= 1;

            if(aux[ch - 'a'] < 0) return false;
        }
        return true;
    }
};