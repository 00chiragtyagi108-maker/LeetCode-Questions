class Solution {
public:

    vector<string> findWords(vector<string>& words) {
        
        vector<string> ans ;
        vector<int> aux = {1,2,2,1,0,1,1,1,0,1,1,1,2,2,0,0,0,0,1,0,0,2,0,2,0,2} ;

        int n = words.size() ;

        for(int i = 0;i < n;i++){
            
            string lcase_s = words[i];

            for (char &c : lcase_s) {
                c = tolower(c);
            }   

            int k =  lcase_s.size() ;
            bool valid = true ;

            for(int j = 0 ; j < k - 1 ; j++){
                if(aux[lcase_s[j] -'a'] ==  aux[lcase_s[j + 1] - 'a']){

                    continue;
                
                }
                else {

                    valid = false ;
                    break ;
                
                }
            }
            if(valid){
                ans.push_back(words[i]) ;
            }
        }
        return ans ;
    }
};