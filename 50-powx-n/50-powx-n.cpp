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
        
        double ans=  myPoww(x,abs(n));
        if(n<0)
            return 1.00/ans;
        else
            return ans;
    }
};