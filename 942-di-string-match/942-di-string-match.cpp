class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int len=s.length();
        int nI=0;
        int lI=len;
        int i=0;
        for( i=0; i<len; i++){
            if(s.at(i)=='I'){
                ans.push_back(nI);
                nI++;
            }
            else{
                if(s.at(i)=='D'){
                    ans.push_back(lI);
                    lI--;
                }
            }
        }
        if(s.at(i-1)=='I'){
                ans.push_back(nI);
                
            }
            else{
                if(s.at(i-1)=='D'){
                    ans.push_back(lI);
                    
                }
            }
        
        
        return ans;
    }
};