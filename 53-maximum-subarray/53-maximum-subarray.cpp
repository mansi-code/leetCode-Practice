
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=nums[0];
        int localMaxSum=nums[0];
        for(int i=1; i<nums.size(); i++){
           localMaxSum = max(nums[i], localMaxSum+ nums[i]);// current ko addkrne se bada ya nhi 
            maxSum = max(localMaxSum, maxSum);
        }
        return maxSum;
    }
};
/*
localMax=5 maxSum=6
*/