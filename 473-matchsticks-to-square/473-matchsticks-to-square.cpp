class Solution {
    public:
	// a,b,c,d are four sides of square
    int a,b,c,d;
    bool fun(vector<int>& matchsticks,int i){
        //Base Case
        if(i==matchsticks.size()){
            if(a==0 && b==0 && c==0 && d==0) return true;
            else return false;
        }
        
		//Now we will explore for all side for given index
		
		// if matchstick size is less than side(a or b or c or d)  size , then in that case we will not explore that because that will cause negative side which is not possible
        if(matchsticks[i]<=a){
            a-=matchsticks[i];
            if(fun(matchsticks,i+1)) return true;
            a+=matchsticks[i];      // backtrack step
        }
        
        if(matchsticks[i]<=b){
            b-=matchsticks[i];
            if(fun(matchsticks,i+1)) return true;
            b+=matchsticks[i];        // backtrack step                    
        }
        
        if(matchsticks[i]<=c){
            c-=matchsticks[i];
            if(fun(matchsticks,i+1)) return true;
            c+=matchsticks[i];         // backtrack step
        }
        
        if(matchsticks[i]<=d){
            d-=matchsticks[i];
            if(fun(matchsticks,i+1)) return true;
            d+=matchsticks[i];         // backtrack step
        }
		
		//If none of the explored option retuen true then  we have to return false
        return false;
    }
public:
    bool makesquare(vector<int>& matchsticks) {
		//  if less than four number present in array , then we can not make square
        if(matchsticks.size()<4) return false;
        
		// if sum of all number of array is not divisible by 4 , then we can not create a square
		int sum = accumulate(matchsticks.begin(), matchsticks.end(),0);
        if(sum % 4 != 0) return false;
        
		int sizeSum=sum/4;
        a=sizeSum,b=sizeSum,c=sizeSum,d=sizeSum;
        
		// here we sort our array in reverse order to escape more cases
		sort(matchsticks.rbegin(), matchsticks.rend());
        
		return fun(matchsticks,0);
    }
};
// class Solution {
// public:
//     bool makesquare(vector<int>& matchsticks, int left,int  right,int top, int bottom , int idx){
//         if(idx == matchsticks.size()){
//             if(left==0 && right==0 && top==0 && bottom==0)
//              return true;
//             else
//              return false;
//         }
         
//         if(matchsticks[idx]<=left){
//         left =  left- matchsticks[idx];
//         bool s1= makesquare(matchsticks, left, right, top, bottom,idx+1);
//         if(s1) return true;
//         left= left+matchsticks[idx];
//         }
       
        
//         if(matchsticks[idx]<=right){
//             right=right -matchsticks[idx];
//         bool s2= makesquare(matchsticks, left, right, top, bottom,idx+1);
//         if(s2) return true;
//         right= right+ matchsticks[idx];
//         }
        
//         if(matchsticks[idx]<=top){
//         top=top -matchsticks[idx];
//         bool s3= makesquare(matchsticks, left, right, top, bottom,idx+1);
//         if(s3) return true;
//         top= top+ matchsticks[idx];
//         }
        
        
//         if(matchsticks[idx]<=bottom){
//            bottom=bottom -matchsticks[idx];
//         bool s4= makesquare(matchsticks, left, right, top, bottom,idx+1);
//         if(s4) return true;
//         bottom= bottom+ matchsticks[idx]; 
//         }
         
        
   
//         return false;
//     }
//     bool makesquare(vector<int>& matchsticks) {
//         if(matchsticks.size()<4){
//             return false;
//         }
//         int sum=0;
//         for(int i=0; i<matchsticks.size(); i++){
//             sum= matchsticks[i];
//         }
        
//         if(sum%4!=0)
//             return false;
        
//         int sidesum= sum/4;
//         int left= sidesum, right= sidesum, top= sidesum, bottom= sidesum;
//         int idx=0;
//         return makesquare(matchsticks,left, right, top, bottom , idx);
//     }
// };