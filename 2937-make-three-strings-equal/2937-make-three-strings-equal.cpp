class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        
        int minis = min({s1.size(), s2.size(), s3.size()});
        
        int count = 0;

        while (count < minis && s1[count] == s2[count] && s1[count] == s3[count])
            count++;

        return count == 0 ? -1 : s1.size() + s2.size() + s3.size() - 3 * count;
    }
};