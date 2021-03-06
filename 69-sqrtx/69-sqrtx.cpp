class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        
        long long start=0, end= x, mid,ans;
        while(start<=end){
            mid=(start+end)/2;
            if(mid*mid==x) return mid;
            if(mid*mid<x){
                start=mid+1;
                ans=mid;}
            else
                end= mid-1;
        }
        return ans;
    }
};