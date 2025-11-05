class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long ans=0;
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                ans += nums[i];
            else
                ans = ans - nums[i];
        }
        return ans;
    }
};