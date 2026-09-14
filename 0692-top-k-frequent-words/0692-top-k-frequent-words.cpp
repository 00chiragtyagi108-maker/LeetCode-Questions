class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        

        map<string,int> mp ;

        for(auto word: words){
            mp[word]++ ;
        }

        vector<pair<string,int>> v(mp.begin() , mp.end()) ;

        sort(v.begin() , v.end() , [](pair<string,int> a, pair<string,int>b){
            
            if(a.second != b.second){
                return a.second > b.second ;
            }
            return a.first < b.first ; 
            // as we have to give lexicographical smaller word before the  lexicographical larger one
            
        }) ;

        vector<string> sub ;

        for(int i = 0;i < k;i++){
            sub.push_back(v[i].first) ;
        }
        return sub ;
    }
};