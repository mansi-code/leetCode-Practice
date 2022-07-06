class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> ans;
        map<int,int>u;
        
        for(auto x : nums)
        {
            u[x]++;
        }
        
        for(auto x: u){
            ans.push_back(x.first);
        }
        int n= ans.size();
        
        if(n <3)
            return ans[n-1];
        else
            return ans[n-3];
            //         sort(nums.begin(), nums.end());
//         if(nums.size()<3){
            
//             return nums[nums.size()-1];
//         }
//         else
//             return nums[nums.size()-3];
//         priority_queue <int, vector<int>, greater<int> > pq;
        
//         for(int i=0 ; i<3; i++){
//                 pq.push(nums[i]);
//         }
//         for(int i=3; i<nums.size(); i++){
//             int max3 = pq.top();
//             if(max3<nums[i]){
//                 pq.pop();
//                 pq.push(nums[i]);
//             }
//         }
        
//         return pq.top();
    }
};