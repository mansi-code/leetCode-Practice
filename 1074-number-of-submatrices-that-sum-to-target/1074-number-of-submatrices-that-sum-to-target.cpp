class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> prefix(m,vector<int>(n,0));
        for(int j = 0; j<n; j++){
            int sum = 0;
            for(int i = 0; i<m; i++){
                sum += matrix[i][j];
                prefix[i][j] = sum;
            }
        }
        int ans = 0;
        for(int i = 0; i<m; i++){
            for(int r = 0; r<=i; r++){
                vector <int> arr = prefix[i];
                if(r==i) ans += fun(arr,target);
                else{
                    for(int j = 0; j<n; j++) arr[j] -= prefix[r][j];
                    ans += fun(arr,target);
                }
            }
        }
        return ans;
    }
protected:
    int fun(vector<int>&arr, int target){
        unordered_map <int,int> mp;
        int sum = 0, ans = 0;
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            if(sum == target) ans++;
            if(mp.find(sum-target)!=mp.end()) ans += mp[sum-target];
            mp[sum]++;
        }
        return ans;
    }
};