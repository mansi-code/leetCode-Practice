class Solution {
public:
    bool areVectorsEqual(vector<int>a, vector<int>b){
        for(int i=0; i<a.size(); i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
       
       
        vector<int> freq1(26, 0);
        if(s2.length()<s1.length())
            return false;
       for(char c: s1) freq1[c-'a']++;
        //increase frequency if the character is there
        
        vector<int> freq2(26,0);
        int i=0;
        int j=0;
        while(j<s2.length()){
            freq2[s2[j]-'a']+=1;
            
            
            if(j-i+1==s1.size()){
                if(areVectorsEqual(freq1, freq2))
                    return true;
            }
            
            if(j-i+1<s1.size()){
                j++;
            }
            else{
                freq2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
        
        
    }
};