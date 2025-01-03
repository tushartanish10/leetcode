class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int &num:nums){
            sum+=num;
        }
        long long leftS=0;
        long long rightS=0;
        int split=0;
        for(int i=0;i<n-1;i++){
            leftS+=nums[i];
            rightS=sum-leftS;
            if(leftS>=rightS){
                split++;
            }
        }
        return split;
        
    }
};