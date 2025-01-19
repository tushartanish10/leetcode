class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string A=" ";
        for(const string& str : word1){
            A+=str;
        }
        string B=" ";
        for(const string& str : word2){
            B+=str;

        }
        return A==B;
        
    }
};