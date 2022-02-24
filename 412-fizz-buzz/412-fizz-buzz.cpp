class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1; i<=n; i++){
            string current="";
            bool flag=true;
            if(i%3==0){
                current.append("Fizz");
                flag=false;
            }
            if(i%5==0){
                current.append("Buzz");
                flag=false;
            }
            if(flag){
                current.append(to_string(i));
            }
            ans.push_back(current);
        }
        return ans;
        
    }
};