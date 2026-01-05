class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n =arr.size();
        int start = 0,end=n-1;
        int ans=0;
        while(start<end){
            int d = end-start;
            int m = min(arr[start],arr[end]);
            ans = max(ans,d*m);
            if(arr[start]<=arr[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
        
    }
};