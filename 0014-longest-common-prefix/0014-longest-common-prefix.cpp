class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
        for (int i = 0;; ++i)
            if (any_of(strs.begin(), strs.end(),
                       [&](auto &str) { return !str[i] || str[i] != strs[0][i]; }))
                return strs[0].substr(0, i);
    }
};