// we can also use stack for this problem
class Solution {
    public:
        string removeDuplicates(string S) {
            string v;
            v.push_back(S[0]);

            for(int i=1; i<S.size(); i++) {
                if(v.empty())
                    v.push_back(S[i]);
                else {
                    if(S[i] == v.back())
                        v.pop_back();
                    else
                        v.push_back(S[i]);
                }
            }

            return v;
        }
};
