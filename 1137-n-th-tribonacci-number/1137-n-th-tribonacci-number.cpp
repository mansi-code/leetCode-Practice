class Solution {
public:
//     int tribonacci(int n , int* dp){
//         if(n<=0)
//             return 0;
//         if(n==1)
//             return 1;
//         if(n==2)
//             return 1;
        
//         if(dp[n]!=-1)
//             return dp[n];
//         int s1= tribonacci(n-1);
//         int s2= tribonacci(n-2);
//         int s3= tribonacci(n-3);
        
//         return dp[n]=s1+s2+s3;
//     }
    int tribonacci(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 1;
        int *dp= new int[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        
        for(int i=3; i<=n; i++){
            dp[i]=dp[i-1]+ dp[i-2]+ dp[i-3];
        }
        return dp[n];
    }
};