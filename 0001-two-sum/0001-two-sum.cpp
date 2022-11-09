class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> d;

        for (int i = 0; i < nums.size(); ++i) {
            int &num = nums[i];
            if (d.count(num)) {
                return {d[num], i};
            }

            d[target - num] = i;
        }

        return {};
    }
};