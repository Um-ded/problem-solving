// Approach 1: time complexity: O(n)
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_map<int, int> ump;
    
            for(auto u: nums) {
                if(ump.find(u) != ump.end())
                    return true;
    
                ump[u]++;
            }
    
            return false;
        }
};

// Approach 2: time complexity: O(nlogn)
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            set<int> s;

            for(auto i:nums)
                s.insert(i);

            return (s.size()!=nums.size());
        }
};