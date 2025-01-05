class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> diff(n,0);
        for(auto &query:shifts){
            int l=query[0];
            int r=query[1];
            int dir=query[2];
            int x;
            if(dir==0){
                x=-1;
            }
            else{
                x=1;
            }
            diff[l]+=x;
            if(r+1<n){
                diff[r+1]-=x;
            }
        }
        for(int i=1;i<n;i++){
            diff[i]+=diff[i-1];
        }
        for(int i=0;i<n;i++){
            int shifts=diff[i]%26;
            if(shifts<0){
                shifts+=26;
            }
            s[i]=(((s[i]-'a')+shifts)%26)+'a';
        }
        return s;

        
    }
};