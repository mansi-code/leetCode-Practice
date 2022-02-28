class Solution {
public:
    int maxArea(vector<int>& height) {
        //the rectangle will be formed when start se leke end tk ke 2 top heights li jaye , 
        //and unka difference index ka hoga breadth !! 
        //to loop chalayenge from i to j
        //jisse jis rectangle ki value highest ho use hum ans m rkeh 
        
        
        int i=0;
        int j=height.size()-1;
        int ans=0;
        
        while(i<j){
            
            ans= max(ans, ( min(height[i], height[j])* (j-i))) ;
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        
        return ans;
    }
};