class Solution {
public:
    int firstoccurence(vector <int> & nums,int target){
        int low =0;
        int first = -1;
        int n = nums.size();
        int high = n-1 ;
        while ( low <= high){
            int mid = (low + high )/2;
            if ( nums[mid]==target){
                first=mid;
                high = mid-1;
            }
            else if ( nums[mid]< target) 
            {
                low = mid + 1 ;
            }
            else high = mid -1;
        }
        return first;
    }
     int lastoccurence(vector <int> & nums,int target){
        int low =0;
        int last = -1;
        int n = nums.size();
        int high = n-1 ;
        while ( low <= high){
            int mid = (low + high )/2;
            if ( nums[mid]==target){
                last=mid;
                low = mid+1;
            }
            else if ( nums[mid]> target) 
            {
                high = mid - 1 ;
            }
            else low = mid +1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans ;
        int first = firstoccurence(nums,target);
        
        int last = lastoccurence( nums,target);
        return ans = {first,last};
    }
};