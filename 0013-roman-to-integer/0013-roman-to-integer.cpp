class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> translation = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0, prev = 0, cur = 0;

        for (reverse_iterator rit = s.rbegin(); rit != s.rend(); ++rit) {
            prev = cur;
            cur = translation[*rit];

            if (cur < prev) {
                ans -= cur;
            } else {
                ans += cur;
            }
        }
        
        return ans;
    }
};