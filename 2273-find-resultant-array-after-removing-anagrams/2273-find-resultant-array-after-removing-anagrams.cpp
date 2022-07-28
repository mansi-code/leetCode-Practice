class Solution {
public:
      bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
        }
        for(int i=0; i<t.size(); i++){
            freq[t[i]-'a']--;
        }
        
        for(int i=0; i<26; i++){
           if(freq[i]!=0)
               return false;
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string> ans;
        int i=0,j=1;
        int len= words.size();
        
        
        while(i<len-1 && j<len){
            if(isAnagram(words[i], words[j])){
                j++;
                continue;
            }
            ans.push_back(words[i]);
            i= j;
            j++;
        }
        ans.push_back(words[i]);
//         while(i<len-1){
//            if(isAnagram(words[i], words[j]) ) {
               
//                // for(int k=i+1; k<len-1; k++){
//                //     words[k]= words[k+1];
//                //     len=len-1;
//                // }
//                j++;
               
//            }
//             else{
//                 i++;
//             }
//         }
        return ans;
    }
};