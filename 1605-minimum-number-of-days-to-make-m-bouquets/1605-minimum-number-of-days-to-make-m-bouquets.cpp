class Solution {
public:
    bool possible(vector<int>& bloomDay, int mid, int m, int k) {
        int cnt = 0;
        int numberOfBouquet = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                cnt++;
            } else {

                numberOfBouquet += cnt / k;
                cnt = 0;
            }
        }
        numberOfBouquet += cnt / k;
        return numberOfBouquet >= m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        long long val=(1LL)*m*k;
        if (n < val)
            return -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k) == true) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};