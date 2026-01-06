class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        
        int window  = 0;
        for(int i=0;i<k;i++){
            window=window^arr[i];
        }
        int m = window;
        for(int i=k;i<arr.size();i++){
            window=window^arr[i-k]^arr[i];
            m = max(m,window);
        }
        
        return m;
    }
};