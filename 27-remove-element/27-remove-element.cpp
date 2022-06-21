class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int curr=0;
        //int pos=0;
        int n= nums.size();
        
        while(curr<n){
            if(nums[curr]==val){
                nums[curr]=nums[n-1];
                n--;
                //pos++;
            }
            else{
                curr++;
            }
        }
        return curr;
    }
};