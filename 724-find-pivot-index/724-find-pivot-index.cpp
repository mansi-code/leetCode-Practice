class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int right=0;
        int n= nums.size();
        for(int i=1; i<n; i++){
            right+= nums[i];
        }
        
        //left= 0 , right = a[i+1]-- a[n];
        int i=0;
        bool found= false;
        while(i<n){
            if(i==n-1){
                right=0;
                if(left==right){
                    found=true;
                
                }
                break;
            }
            if(left==right){
                
                found=true;
                break;
            }
            else
            {
                left+= nums[i];
                right-= nums[i+1];
            }
            i++;
        }
        if(found)
         return i;
        else
            return -1;
    }
};