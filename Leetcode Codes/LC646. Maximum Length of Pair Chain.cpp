class Solution {
    public:
        int findLongestChain(vector<vector<int>>& pairs) {
            int sz = pairs.size();
            vector<pair<int, int> > vp(sz);

            for(int i=0; i<sz; i++) {
                vp[i].first = pairs[i][0];
                vp[i].second = pairs[i][1];
            }

            sort(vp.begin(), vp.end());
            int ans = 0;
            vector<int> dp(sz, 1);

            for(int i=sz-1; i>=0; i--) {
                int cur = 0;

                for(int j=i+1; j<sz; j++)
                    if(vp[i].second<vp[j].first)
                        cur = max(cur, dp[j]);

                dp[i] = cur+1;
                ans = max(ans, dp[i]);
            }

            return ans;
        }
};
