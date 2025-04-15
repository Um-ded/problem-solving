class Solution {
    public:
        bool isAnagram(string s, string t) {
            int status[26] = {0};
    
            for(auto ch: s)
                status[ch-'a']++;
    
            for(auto ch: t)
                status[ch-'a']--;
    
            for(auto u: status)
                if(u != 0)
                    return false;
    
            return true;
        }
};