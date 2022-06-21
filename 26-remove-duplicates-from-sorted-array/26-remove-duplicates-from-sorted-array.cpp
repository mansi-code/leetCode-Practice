class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n= arr.size();
         if(n==1|| n==0)
        return n;
    int current=0, next=1;
   while(next<n){
        if(arr[current]!=arr[next])
        {
            arr[current+1]=arr[next];
            current++;
        }
        next++;
    }
    //for(int i=current+1; i<n; i++){
      //  arr.pop_back();
    //}
    return current+1;
    }
};