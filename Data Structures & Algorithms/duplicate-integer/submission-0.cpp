class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> x;
        for (int i = 0; i < nums.size(); i++) {
            x[nums[i]]++;
        }
        int cOnes = 0, y = 0;
        for (auto f : x) {
            if (f.second == 1) {
                cOnes++;
            }
            y++;
        }
        if (cOnes == y) {
            return false;
        }
        return true;
    }
};