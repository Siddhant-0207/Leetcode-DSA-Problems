class Solution {
public:
    long long TotalDays(vector<int>& weights, int mid) {
        long long  total = 0;
        int d = 1;
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i]+total> mid) {
                d=d+1;
                total = weights[i];
            } else {
                total+=weights[i];
            
            }
        }
        return d;
    }
    long long  shipWithinDays(vector<int>& weights, int days) {
        long long  low = *max_element(weights.begin(), weights.end());
        long long high  = accumulate(weights.begin(),weights.end(),0);
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long  numberOfDays = TotalDays(weights, mid);
            if (numberOfDays <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};