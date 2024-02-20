///Approach 1

class Solution
{
    public:
        int minDistance(string word1, string word2)
        {
            int dp[word1.size()+2][word2.size()+2];
            int sza = word1.size();
            int szb = word2.size();

            for(int i=0; i<=sza; i++)
                dp[i][szb] = sza-i;

            for(int i=0; i<=szb; i++)
                dp[sza][i] = szb-i;

            for(int i=sza-1; i>=0; i--)
            {
                for(int j=szb-1; j>=0; j--)
                {
                    if(word1[i] == word2[j])
                        dp[i][j] = dp[i+1][j+1];
                    else
                        dp[i][j] = min(min(dp[i+1][j]+1, dp[i][j+1]+1), dp[i+1][j+1]+1);
                }
            }

            return dp[0][0];
        }
};



///Approach 2

class Solution
{
    public:
        int minDistance(string word1, string word2)
        {
            int dp[word1.size()+2][word2.size()+2];
            int sza = word1.size();
            int szb = word2.size();

            for(int i=0; i<=sza; i++)
                dp[i][0] = i;

            for(int i=0; i<=szb; i++)
                dp[0][i] = i;

            for(int i=1; i<=sza; i++)
            {
                for(int j=1; j<=szb; j++)
                {
                    if(word1[i-1] == word2[j-1])
                        dp[i][j] = dp[i-1][j-1];
                    else
                        dp[i][j] = min(min(dp[i-1][j]+1, dp[i][j-1]+1), dp[i-1][j-1]+1);
                }
            }

            return dp[sza][szb];
        }
};
