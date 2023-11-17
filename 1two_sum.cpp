class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> rec;
        for(int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            int y = target - nums[i];
            if (rec.count(y)) {
                int j = rec[y];
                return vector<int>{i, j};
            }
            rec[x] = i;
        }
        return vector<int>();
    }
};
