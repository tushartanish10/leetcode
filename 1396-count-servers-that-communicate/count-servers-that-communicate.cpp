class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>indexcolCount(m,0);
        vector<int>indexrowCount(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    indexcolCount[j]+=1;
                    indexrowCount[i]+=1;
                }
            }
        }
        int resultservers=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && (indexcolCount[j]>1||indexrowCount[i]>1)){
                    resultservers++;
                }
            }
        }
        return resultservers;    
    }
};