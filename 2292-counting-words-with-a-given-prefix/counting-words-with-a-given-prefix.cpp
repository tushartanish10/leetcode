class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(const string & word:words){
            if(word.substr(0,pref.size())==pref){
                c++;
            }
        }
        return c;
        
    }
};