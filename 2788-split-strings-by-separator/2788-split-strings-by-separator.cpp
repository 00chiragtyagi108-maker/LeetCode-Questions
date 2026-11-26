class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        
        int n = words.size() ;
        vector<string> ans ;

        string aux = "" ;

        for(int i = 0 ; i < n ;i++) {
            int j = 0 ;
            int m = words[i] . size() ;
            while(j < m ) {
                if(words[i][j] == separator ) {
                    if(aux.size() != 0 ){
                        ans.push_back(aux) ;
                        aux.clear() ;
                    }
                }
                else{
                    aux += words[i][j] ;
                }
                j++ ;
            }
            if(aux.size() != 0 ){
                ans.push_back(aux) ;
                aux.clear() ;
            }
        }
        return ans ;
    }
};