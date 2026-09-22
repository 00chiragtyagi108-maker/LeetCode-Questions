class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int n = word1.size() ;
        int m = word2.size() ;

        string text1 = "" ;
        string text2 = "" ;

        for(int i = 0;i < n;i++){
            text1 += word1[i] ;
        }
        for(int j = 0;j < m;j++) {
            text2 += word2[j] ;
        }
        return text1==text2?true:false ;
    }
};