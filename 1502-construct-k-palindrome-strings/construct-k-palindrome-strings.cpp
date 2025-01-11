class Solution {
public:
    bool canConstruct(string s, int k) {
        if (k > s.length()) return false;
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }
        int odd_count = 0;
        for (const auto& entry : charCount) {
            if (entry.second % 2 != 0) {
                odd_count++;
            }
        }
        return odd_count <= k;    
    }
};