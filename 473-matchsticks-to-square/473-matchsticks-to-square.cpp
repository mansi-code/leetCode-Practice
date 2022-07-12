
class Solution {
public:
    bool makesquare(vector<int>& matchsticks, int left,int  right,int top, int bottom , int idx){
        if(idx == matchsticks.size()){
            if(left==0 && right==0 && top==0 && bottom==0)
             return true;
            else
             return false;
        }
         
        if(matchsticks[idx]<=left){
        left =  left- matchsticks[idx];
        bool s1= makesquare(matchsticks, left, right, top, bottom,idx+1);
        if(s1) return true;
        left= left+matchsticks[idx];
        }
       
        
        if(matchsticks[idx]<=right){
            right=right -matchsticks[idx];
        bool s2= makesquare(matchsticks, left, right, top, bottom,idx+1);
        if(s2) return true;
        right= right+ matchsticks[idx];
        }
        
        if(matchsticks[idx]<=top){
        top=top -matchsticks[idx];
        bool s3= makesquare(matchsticks, left, right, top, bottom,idx+1);
        if(s3) return true;
        top= top+ matchsticks[idx];
        }
        
        
        if(matchsticks[idx]<=bottom){
           bottom=bottom -matchsticks[idx];
        bool s4= makesquare(matchsticks, left, right, top, bottom,idx+1);
        if(s4) return true;
        bottom= bottom+ matchsticks[idx]; 
        }
         
        
   
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size()<4){
            return false;
        }
      int sum = accumulate(matchsticks.begin(), matchsticks.end(),0);
        
        if(sum % 4 !=0)
            return false;
        
        int sidesum= sum/4;
        int left= sidesum, right= sidesum, top= sidesum, bottom= sidesum;
        int idx=0;
        sort(matchsticks.rbegin(), matchsticks.rend());
        return makesquare(matchsticks,left, right, top, bottom , idx);
    }
};