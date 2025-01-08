class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        
        // Helper function to check if str1 is both a prefix and suffix of str2
        auto isPrefixAndSuffix = [](const std::string& str1, const std::string& str2) {
            int len1 = str1.length();
            int len2 = str2.length();
            
            // Check if str1 can be a prefix and suffix of str2
            if (len1 > len2) return false;
            
            // Check prefix condition
            if (str2.substr(0, len1) != str1) return false;
            
            // Check suffix condition
            if (str2.substr(len2 - len1) != str1) return false;
            
            return true;
        };
        
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }
        
        return count;
        
    }
};