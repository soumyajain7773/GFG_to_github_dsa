class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        
        int window=0;
        // calculate first window sum
        for(int i=0;i<k;i++){
            window+=arr[i];
        }
        int maxsum=window;
        for(int i=k;i<arr.size();i++){
            window+=arr[i];
            window-=arr[i-k];
            maxsum=max(window,maxsum);
        }
        return maxsum;
    }
};