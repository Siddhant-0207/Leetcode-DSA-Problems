class Solution {
public:
    int findMaxElement(vector<int>& piles , int n){
       int  maxi=INT_MIN;
        for(int i = 0 ; i<n;i++){
            maxi= max(maxi,piles[i]);
        }
        return maxi;
    }
    long long totalHours(vector<int>& piles,int mid){
        long long  totalTime = 0 ;
        int n = piles.size();
        for ( int i = 0; i<n;i++)
        {
            totalTime += ceil((double)piles[i] / (double)mid);
        }
        return totalTime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long low = 1 ;
        long long high = findMaxElement(piles,n);
        while ( low <= high)
        {
            long long  mid = (low + high)/2;
            if(totalHours(piles,mid)<=h) 
            {   
                high= mid-1;
            }
            else low= mid+1;
        }
        return low;
    }
};