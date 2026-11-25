class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(), [](const auto& a, const auto& b) {
            return a[1] > b[1];
        });

        int count = 0;

        for(const auto& x : boxTypes) {

            int take = min(x[0], truckSize);

            count += take * x[1];

            truckSize -= take;

            if(truckSize == 0) break;
        }

        return count;
    }
};