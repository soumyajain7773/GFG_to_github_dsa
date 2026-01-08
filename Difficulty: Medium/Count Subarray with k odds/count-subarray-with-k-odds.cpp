class Solution {
  public:
  
    int atMost(vector<int>& nums, int k) {
        int left = 0, odd = 0, ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2 == 1) odd++;

            while (odd > k) {
                if (nums[left] % 2 == 1) odd--;
                left++;
            }

            ans += (right - left + 1);
        }
        return ans;
    }
    
    int countSubarrays(vector<int>& arr, int k) {
        
        int ans= atMost(arr, k) - atMost(arr, k - 1);
        return ans;
    }
};