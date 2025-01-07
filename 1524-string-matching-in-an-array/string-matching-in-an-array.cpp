class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>res;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if (i != j && search(words[j].begin(), words[j].end(), words[i].begin(), words[i].end()) != words[j].end()) {
                    res.push_back(words[i]);
                    break;

                }
            }
        }
        return res;
        
    }
};