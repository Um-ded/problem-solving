class Solution
{
    public:
        int trailingZeroes(int n)
        {
            int ans=0, val=1;

            while(val*5<=n)
            {
                val *= 5;
                ans += n/val;
            }

            return ans;
        }
};
