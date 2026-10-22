class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        int asc = 0, desc = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] == (nums[i-1] + 1) % n)     asc++;
            if (nums[i] == (nums[i-1] - 1 + n) % n) desc++;
        }

        int ans = INT_MAX;

        if (asc == n - 1) {
            int k = nums[0];
            if (k == 0) return 0;
            ans = min(ans, min(n - k, k + 2));
        }

        if (desc == n - 1) {
            int k = nums.back();                     // first element after reversing
            int a = (k == 0) ? 1 : 1 + (n - k);      // reverse, then rotate left
            int b = (nums[0] + 1) % n + 1;           // rotate left, then reverse
            ans = min(ans, min(a, b));
        }

        return ans == INT_MAX ? -1 : ans;
    }
};