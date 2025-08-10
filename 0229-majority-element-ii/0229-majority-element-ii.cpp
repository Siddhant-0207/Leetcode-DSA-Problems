class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                cnt1 = 1;
            } else if (cnt2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                cnt2 = 1;
            } else if (el1 == nums[i]) {
                cnt1++;
            } else if (el2 == nums[i]) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ls;
        int mini = (int)(n / 3) + 1;
        int cnt3 = 0, cnt4 = 0;
        for (int i = 0; i < n; i++) {
            if (el1 == nums[i]) {
                cnt3++;
            } else if (el2 == nums[i]) {
                cnt4++;
            }
        }
        if (cnt3 >= mini) {
            ls.push_back(el1);
        }
        if (cnt4 >= mini) {
            ls.push_back(el2);
        }
        return ls;
    }
};