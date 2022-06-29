class Solution {
public:
    double myPoww(double x, int n) {
        if(n==0)
            return 1;
        
        double ans;
        double smallOutput= myPoww(x,n/2);
        if(n%2==0)
            ans= smallOutput*smallOutput;
        else
            ans= smallOutput*smallOutput*x;
        
        
        
        return ans;
    }
    double myPow(double x, int n){
        
        long nn =n;
        if(nn<0) nn=nn*-1;
        double ans=  myPoww(x,nn);
        if(n<0)
            return 1.00/ans;
        else
            return ans;
    }
};