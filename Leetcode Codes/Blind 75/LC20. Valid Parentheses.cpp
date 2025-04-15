class Solution {
    public:
        bool isValid(string s) {
            unordered_map<char, char> ump({{')', '('}, {'}', '{'}, {']', '['}});
            stack<char> stk;
    
            for(auto ch: s) {
                if(ch==')' || ch=='}' || ch==']') {
                    if(!stk.empty() && stk.top() == ump[ch])
                        stk.pop();
                    else
                        return false;
                }
                else
                    stk.push(ch);
            }
    
            if(!stk.empty())
                return false;
    
            return true;
        }
};