class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size();
        vector<int > runningSum(n);
        runningSum[0]= nums[0];
        for(int i=1; i<n; i++){
            runningSum[i]= nums[i]+ runningSum[i-1];
        }
        return runningSum;
    }
};