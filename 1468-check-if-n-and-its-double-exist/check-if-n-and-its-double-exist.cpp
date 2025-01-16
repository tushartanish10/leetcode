class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>A;
        for(int i=0;i<arr.size();i++){
            int x=arr[i];
            if(A.count(2*x)||(x%2==0 && A.count(x/2))){
                return true;
            }
            A.insert(x);
        }
        return false;
        
    }
};