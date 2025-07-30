class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> seen;
        for ( int i = 0 ; i< n ; i ++){
            seen[nums[i]]++;
        }
        for ( auto it : seen)
        {
            if (it.second >1)
            return true ;
        }
        return false ;
    }
};