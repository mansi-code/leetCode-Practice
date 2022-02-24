#include<algorithm>
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        stack<int> st;
        int sums=0;
        int len=nums.size();
        sort(nums.begin(), nums.end());
        int i;
        for(i=0; i<len-1; i++){
            if(st.empty()){
                if(nums.at(i)!=nums.at(i+1))
                {
                   
                    sums+=nums.at(i);
                }
                else{
                     st.push(nums.at(i));
                }
            
            }
            else{
                if(nums.at(i)==nums.at(i+1))
                {
                   st.push(nums.at(i));
                    
                }
                if(nums.at(i)!=st.top())
                {
                    
                    sums+=nums.at(i);
                }
            }
        }
        if(!st.empty()){
            if(nums.at(i)!=st.top())
                {
                    
                    sums+=nums.at(i);
                }
        }
        else{
            sums+=nums.at(i);
        }
            
        return sums;
    }
};