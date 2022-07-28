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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string> > hashmap;
        for(int i=0; i<strs.size(); i++){
            string curr= strs[i];
            string temp= curr;
            sort(temp.begin(), temp.end());
           
            hashmap[temp].push_back(curr);
        }
        
        for(auto& p :hashmap){
            ans.push_back(p.second);
        }
        return ans;
    }
};

