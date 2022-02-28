class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()==0)
            return 0;
        int startH= 0;
        int endH= height.size()-1;
        int ans=0;
        while(startH<endH){
            ans= max(ans,(min(height[startH],height[endH]) * (endH-startH)));
            if(height[startH]<height[endH])
                startH++;
            else
                endH--;
        }
        return ans;
        
    }
};