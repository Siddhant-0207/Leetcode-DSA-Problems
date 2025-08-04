class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;
        mapp[0] = 1;
        int PreSum = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            PreSum += nums[i];
            int remove = PreSum - k;
            cnt += mapp[remove];
            mapp[PreSum] += 1;
        }
        return cnt;
    }
};