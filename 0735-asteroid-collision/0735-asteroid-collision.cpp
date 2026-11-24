class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> ans ;

        for(int asteroid: asteroids) {
            bool isDestroyed = false ;
            
            while(!ans.empty()> 0 && ans.back() > 0 && asteroid < 0 ) {

                if(ans.back() < abs(asteroid)) {
                    ans.pop_back() ;
                }

                else if(ans.back() == abs(asteroid)) {
                    isDestroyed = true ;
                    ans.pop_back() ;
                    break ;
                }

                else{
                    isDestroyed = true ;
                    break ;
                }
            }

            if(!isDestroyed ) {
                ans.push_back(asteroid) ;
            }
        }
        return ans ;
    }
};