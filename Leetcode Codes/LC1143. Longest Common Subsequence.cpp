class Solution {
    public:
        int longestCommonSubsequence(string text1, string text2) {
            int sza = text1.size();
            int szb = text2.size();
            vector<int> v;
            vector<vector<int> > dp;
            v.assign(szb+2, 0);
            dp.assign(sza+2, v);

            for(int i=sza-1; i>=0; i--) {
                for(int j=szb-1; j>=0; j--) {
                    if(text1[i]==text2[j])
                        dp[i][j] = dp[i+1][j+1]+1;
                    else
                        dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
                }
            }

            return dp[0][0];
        }
};
