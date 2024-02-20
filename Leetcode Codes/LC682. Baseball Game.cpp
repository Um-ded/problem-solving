class Solution///we can also use stack for this problem
{
    public:
        int calPoints(vector<string>& ops)
        {
            int ans=0;
            vector<int> v;

            for(int i=0; i<ops.size(); i++)
            {
                if(ops[i] == "+")
                {
                    int x, y;
                    x = v[v.size()-1];
                    y = v[v.size()-2];
                    v.push_back(x+y);
                }
                else if(ops[i] == "D")
                {
                    int x;
                    x = 2*v.back();
                    v.push_back(x);
                }
                else if(ops[i] == "C")
                    v.pop_back();
                else
                {
                    int x;
                    x = stoi(ops[i]);
                    v.push_back(x);
                }
            }

            for(int i=0; i<v.size(); i++)
                ans += v[i];

            return ans;
        }
};
