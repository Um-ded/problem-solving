// this problem can be solved using two pointers if we want to avoid using extra space
class Solution {
    public:
        bool isPalindrome(string s) {
            string t;
    
            for(int i=0; i<s.size(); i++)
                if(isalnum(s[i]))
                    t += tolower(s[i]);
    
            int szt = t.size();
    
            for(int i=0; i<(szt+1)/2; i++)
                if(t[i] != t[szt-i-1])
                    return false;
    
            return true;
        }
};