class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        int n = points.size() ;
        vector<pair<pair<int,int> , int>> v ;

        int x1 = 0;
        int y1 = 0 ;

        for(int i = 0;i < n;i++){

            int x2 = points[i][0] ;
            int y2 = points[i][1] ;

            int dist = pow((x2 - x1),2) + pow((y2 - y1),2) ;

            v.push_back({{x2 , y2 } , dist}) ;
        }

        sort(v.begin() , v.end() ,[](pair<pair<int,int> , int> a, pair<pair<int,int> , int> b)
            {    
            return a.second < b.second ;
            }
         ) ;

        vector<vector<int>> ans ;
        for(int i = 0;i < k;i++){
            ans.push_back({v[i].first.first , v[i].first.second}) ;
        }
        return ans ;
    }
};
