class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int cur = 0, mx = nums[0];
    
            for(auto u: nums) {
                cur += u;
                mx = max(cur, mx);
    
                if(cur < 0)
                    cur = 0;
            }
    
            return mx;
        }
};