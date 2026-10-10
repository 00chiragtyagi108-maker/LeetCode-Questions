class Solution {
public:

    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        
       int n = nums1.size() ;
       int maxdiff = 0;
       long long result = 0 ;
       long long totalDiff = 0 ;

       for(int i = 0 ; i < n ; i++ ) {
            totalDiff += abs(nums1[i] - nums2[i]) ;
            if(abs(nums1[i] - nums2[i]) > maxdiff) {
                maxdiff = abs(nums1[i] - nums2[i]) ;
            } 
        }
        int k = k1 + k2 ;

        if(k >= totalDiff ) 
            return 0 ;

        vector<int> diff(maxdiff + 1 , 0) ;

        for(int i = 0;i < n;i++) {
            int auxdiff =  abs(nums1[i] - nums2[i]) ;
            diff[auxdiff]++ ;
        }
        
        int sz = diff.size() ;

        for(int i = sz-1 ; i > 0 && k > 0 ; i--) {
            int countdiff = min(diff[i] , k) ;
            diff[i] -= countdiff ;
            diff[i-1] += countdiff ;
            k -= countdiff;
        }

        for(int i = 0;i < sz ; i++) {
            result += 1LL * diff[i]* i * i ;
        }

        return result ;
    }
};