#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int countPalindromicSubsequence(std::string s) {
        std::vector<int> firstOccurrence(26, -1);
        std::vector<int> lastOccurrence(26, -1);
        std::unordered_set<std::string> uniquePalindromes;

        // Record the first and last occurrence of each character
        for (int i = 0; i < s.size(); ++i) {
            int index = s[i] - 'a';
            if (firstOccurrence[index] == -1) {
                firstOccurrence[index] = i;
            }
            lastOccurrence[index] = i;
        }

        // Find all unique palindromic subsequences of length 3
        for (int i = 0; i < 26; ++i) {
            if (firstOccurrence[i] != -1 && lastOccurrence[i] != -1 && firstOccurrence[i] < lastOccurrence[i]) {
                std::unordered_set<char> middleChars;
                for (int j = firstOccurrence[i] + 1; j < lastOccurrence[i]; ++j) {
                    middleChars.insert(s[j]);
                }
                for (char middle : middleChars) {
                    std::string palindrome = std::string(1, i + 'a') + middle + std::string(1, i + 'a');
                    uniquePalindromes.insert(palindrome);
                }
            }
        }

        return uniquePalindromes.size();
    }
};
