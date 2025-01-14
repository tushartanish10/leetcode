class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>c(n);
        unordered_set<int>SA,SB;
        int ccount=0;
        for(int i=0;i<n;i++){
            SA.insert(A[i]);
            SB.insert(B[i]);
            if(SB.count(A[i])){
                ccount++;
            }if(SA.count(B[i]) &&A[i]!=B[i]){
                ccount++;
            }
            c[i]=ccount;
        }
        return c;
        
    }
};