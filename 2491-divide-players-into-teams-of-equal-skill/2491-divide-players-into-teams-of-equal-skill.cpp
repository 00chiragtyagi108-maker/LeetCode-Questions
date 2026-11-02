class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        int n = skill.size() ;

        sort(skill.begin() , skill.end()) ; 

        int check = skill[0] + skill[n-1] ;
        long long  score = (long long )(skill[0] * skill[n-1]) ;

        int i = 1 ;
        int j = n-2 ;

        while(i < j ) {

            if((skill[i] + skill[j]) == check ){
                score += (long long )(skill[i] * skill[j]) ;
                i++ ;
                j-- ;
            }
            else{
                return -1 ;
            }

        }
        return score ;
    }
};