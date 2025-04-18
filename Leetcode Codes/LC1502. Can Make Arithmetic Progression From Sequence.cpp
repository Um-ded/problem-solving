class Solution {
    public:
        bool canMakeArithmeticProgression(vector<int>& arr) {
            bool ret = true;
            sort(arr.begin(), arr.end());
            int diff = arr[1]-arr[0];

            for(int i=2; i<arr.size(); i++) {
                if(arr[i]-arr[i-1] != diff) {
                    ret = false;
                    break;
                }
            }

            return ret;
        }
};
