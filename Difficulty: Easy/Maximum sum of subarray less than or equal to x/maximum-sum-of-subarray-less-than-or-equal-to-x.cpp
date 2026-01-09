class Solution {
  public:
    long long findMaxSubarraySum(vector<int>& arr, long long k) {
        
        long long sum=0;
        long long maxsum=0;
        long long l=0;
        for(long long r=0;r<arr.size();r++){
            sum+=arr[r];
            while(sum>k){
                sum-=arr[l];
                l++;
            }
            if(sum<=k){
                maxsum=max(sum,maxsum);
            }
        }
        return maxsum;
    }
};
