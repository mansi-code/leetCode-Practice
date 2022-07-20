class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int> > mappings(26);
        for(int i = 0; i < size(s); i++) mappings[s[i] - 'a'].push_back(i);
        int ans=0;
        for(auto& word : words) {
            bool found = true;
            // i = index in word | prev = index in s matched for word[i-1]
            for(int i = 0, prev = -1; found && i < size(word); i++) {
                auto& v = mappings[word[i]-'a'];// word ka ith index 
                auto it = upper_bound(begin(v), end(v), prev);   // check if current character exists in s with index > prev
                if(it == end(v)) found = false;                  // doesn't exist
                else prev = *it;                                 // update prev for next check
            }
            ans += found;
        }
        return ans;
    }
};