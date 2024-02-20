class Solution {
    public:
        void backtrack(vector<vector<int> > &res, vector<int> &nums, vector<int> &permutation, vector<bool> &isUsed) {
            if(permutation.size() == nums.size()) {
                res.push_back(permutation);
                return;
            }

            for(int i = 0; i < nums.size(); i++) {
                if(!isUsed[i]) {
                    permutation.push_back(nums[i]);
                    isUsed[i] = true;
                    backtrack(res, nums, permutation, isUsed);
                    isUsed[i] = false;
                    permutation.pop_back();
                }
            }
        }

        vector<vector<int> > permute(vector<int>& nums) {
            vector<vector<int> > res;
            vector<int> permutation;
            vector<bool> isUsed(nums.size(), false);
            backtrack(res, nums, permutation, isUsed);
            return res;
        }
};
