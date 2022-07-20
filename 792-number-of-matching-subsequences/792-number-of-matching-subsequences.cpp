class Solution {
public:
    bool isSubsequence( string s , string w){
        
        int i=0, j=0;
        while(i<s.size() && j<w.size()){
            if(s[i]==w[j])
                i++,j++;
            else
                i++; 
        }
        if(j==w.size())
            return true;
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        unordered_map<string,int>mymap;
        for(int i=0; i<words.size(); i++){
            mymap[words[i]]++;
        }
        for(auto x: mymap){
             bool ans= isSubsequence(s, x.first);
            if(ans)
                count+= x.second;
        }
        return count;
    }
};