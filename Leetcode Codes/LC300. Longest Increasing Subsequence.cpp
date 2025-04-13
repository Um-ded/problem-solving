class Solution {
    public:
        int lengthOfLIS(vector<int>& nums) {
            int sz = nums.size();
            vector<int> dp(sz, 1);
            int ans = 0;

            for(int i=sz-1; i>=0; i--) {
                int cur = 0;

                for(int j=i+1; j<sz; j++)
                    if(nums[j]>nums[i])
                        cur = max(cur, dp[j]);

                dp[i] = cur+1;
                ans = max(ans, dp[i]);
            }

            return ans;
        }
};
