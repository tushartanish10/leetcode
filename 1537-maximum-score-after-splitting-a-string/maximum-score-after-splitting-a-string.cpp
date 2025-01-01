class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int maxS=0;
        for(int i=1;i<n;i++){
            int left0=0;
            int right1=0;
            for(int j=0;j<i;j++){
                if(s[j]=='0'){
                    left0++;
                }
            }
            for(int j=i;j<n;j++){
                if(s[j]=='1'){
                    right1++;
                }
            }
            int score=left0+right1;
            maxS=max(maxS,score);
        }
        return maxS;
    }
};