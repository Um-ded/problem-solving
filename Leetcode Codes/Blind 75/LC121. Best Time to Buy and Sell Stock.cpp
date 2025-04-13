// Approach 1: time complexity: O(n)
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int sz = prices.size(), ans = 0;
    
            if(sz == 1)
                return ans;
    
            vector<int> mxs(sz-1);
            mxs[sz-2] = prices.back();
    
            for(int i=sz-3; i>=0; i--)
                mxs[i] = max(prices[i+1], mxs[i+1]);
    
            for(int i=0; i<sz-1; i++)
                ans = max(ans, mxs[i]-prices[i]);
    
            return ans;
        }
};

// Approach 2: two pointers technique, time complexity: O(n)
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int l = 0, r = 1, maxProf = 0;
    
            while (r < prices.size()) {
                if (prices[l] < prices[r])
                    maxProf = max(maxProf, prices[r]-prices[l]);
                else
                    l = r;
                
                r++;
            }
    
            return maxProf;
        }
    };