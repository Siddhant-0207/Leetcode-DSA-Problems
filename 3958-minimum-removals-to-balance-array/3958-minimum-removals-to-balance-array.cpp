class Solution {
    using ll = long long ;
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = n-1 , j = 0;
        for ( int i = 0 ; i < n; i++){
            while ( j+1 < n &&(ll) nums[j+1] <= (ll)k*nums[i]) j++;{
                ans = min ( ans , i+(n-1)-j);
            }
        }
        return ans;
    }
};