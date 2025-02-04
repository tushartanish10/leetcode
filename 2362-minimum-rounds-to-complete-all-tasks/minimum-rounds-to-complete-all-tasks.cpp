class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> freq;
        for (int task : tasks) {
            freq[task]++;
        }
        int rounds = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            int count = it->second;
            if (count == 1) return -1;
            if (count % 3 == 0) {
                rounds += count / 3;
            }
            else {
                rounds += count / 3 + 1;
            }
        }
        return rounds;
    }
};