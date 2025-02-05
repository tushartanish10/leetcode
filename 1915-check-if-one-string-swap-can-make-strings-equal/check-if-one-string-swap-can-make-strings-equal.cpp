class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        vector<int>diffin;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                diffin.push_back(i);
            }
        }
        if(diffin.size()!=2)return false;
        int i=diffin[0],j=diffin[1];
        return(s1[i]==s2[j] && s1[j]==s2[i]);   
    }
};