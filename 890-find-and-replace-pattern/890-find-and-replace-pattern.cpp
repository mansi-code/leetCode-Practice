class Solution {
public:
    bool matched(string &word, string &pattern){
        // if(word.size()!= pattern.size())
        //     return false;
        
        unordered_map<char,char> wordtoPattern;
        unordered_map<char,char> patterntoWord;
        
        
        for(int i=0; i<word.size(); i++){
            
           
            wordtoPattern[word[i]]= pattern[i];
            patterntoWord[pattern[i]]= word[i];
            
        }
        
        for(int i=0; i<word.size(); i++){
        if( (wordtoPattern.count(word[i]) &&  wordtoPattern[word[i]]!= pattern[i]  ) || (patterntoWord[pattern[i]] != word[i] && patterntoWord.count(pattern[i]) ) )
        return false;
        }
        
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(int i=0; i<words.size(); i++){
            bool match= matched(words[i], pattern );
            //cout<<match<<endl;
            if(match)
                ans.push_back(words[i]);
            
        }
        
        return ans;
    }
};

// vector<string> findAndReplacePattern(vector<string>& words, string p) {        
// 	vector<string> ans;
// 	for(auto& w : words) 
// 		if(match(w, p)) ans.push_back(w);
// 	return ans;
// }
// bool match(string& w1, string& w2) {
// 	unordered_map<char, char> w1_to_w2, w2_to_w1;
// 	for(int i = 0; i < size(w1); i++) 
// 		if( (w1_to_w2.count(w1[i]) && w1_to_w2[w1[i]] != w2[i]) || 
// 			(w2_to_w1.count(w2[i]) && w2_to_w1[w2[i]] != w1[i]) ) 
// 			return false; 
// 		else
// 			w1_to_w2[w1[i]] = w2[i],
// 			w2_to_w1[w2[i]] = w1[i];
// 	return true;
// }