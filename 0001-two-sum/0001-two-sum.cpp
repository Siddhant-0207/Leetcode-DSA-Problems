class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
    map<int , int > mapp;
    for(int i=0;i<n;i++)
    {
        int a = nums[i];
        int more = target-a;
        if (mapp.find (more)!=mapp.end())
        {
            return {mapp[more],i};

        }
        mapp[a]=i;
    }
    return {-1,-1};
}
};