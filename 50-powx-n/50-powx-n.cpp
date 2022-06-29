class Solution {
public:
    double myPoww(double x, long n) {
        double ans=1.00;
        while(n>0){
            if(n%2==0)
            {
                x= x*x;
                n=n/2;
            }
            else{
                ans= ans*x;
                n=n-1;
            }
        }
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