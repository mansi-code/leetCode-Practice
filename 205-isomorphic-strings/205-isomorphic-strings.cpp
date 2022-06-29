class Solution {
public:
    bool helper(string s,string t){
        unordered_map<char , char > map;
        int n= s.size();
        if(n!= t.size())
            return false;
        for(int i=0;i<n;i++){
             if (!map.count(s[i])) {
                map.insert({s[i], t[i]});
            }
            else{
                if(map[s[i]]!= t[i])
                    return false;
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return helper(s,t) && helper(t,s);
    }
};