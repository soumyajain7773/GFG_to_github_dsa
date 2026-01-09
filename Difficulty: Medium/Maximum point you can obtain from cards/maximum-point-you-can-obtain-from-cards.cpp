class Solution {
  public:
    int maxScore(vector<int>& arr, int k) {
        
        int maxsum=0,sum=0;
        int n=arr.size();
        // first window sum
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        maxsum=max(maxsum,sum);
        int r=0;
        for(int i=k-1;i>=0;i--){
            sum +=arr[n-1-r];
            sum-=arr[i];
            r++;
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
