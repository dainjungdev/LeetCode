class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string shortest =
            *min_element(strs.begin(), strs.end(), [](auto &left, auto &right) {
                return (left.length() < right.length());
            });

        for (int i = 0; i < shortest.length(); ++i) {
            if (any_of(strs.begin(), strs.end(), [&](string &word) {
                    return (word[i] != shortest[i]);
                })) {
                return shortest.substr(0, i);
            }
        }
        
        return shortest;
    }
};