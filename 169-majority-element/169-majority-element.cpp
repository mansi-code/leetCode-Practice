#include<algorithm>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int midElement= nums.at(nums.size()/2);
        return midElement;
        //Since the element is more than n/2 times , after sorting mid element will be the              //majority element only 
    }
};