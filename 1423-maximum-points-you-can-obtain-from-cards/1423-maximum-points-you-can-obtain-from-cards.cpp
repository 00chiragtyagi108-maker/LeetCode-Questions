class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size() ;
        int sz = n - k ;
        int left = 0;
        int total_pts = 0;

        for( int right = 0; right < n ; right++){
            total_pts += cardPoints[right] ;
        }

        int sum = 0;

        for(int right = 0; right < n - k ;right++){
            sum += cardPoints[right] ;
        }

        int mini = sum ;

        for(int right = n-k ; right < n; right++){
            
            sum -= cardPoints[left] ;
            left++ ;

            sum += cardPoints[right] ;

            mini = min(mini, sum) ;
        }
        return  total_pts - mini  ;
    }
};