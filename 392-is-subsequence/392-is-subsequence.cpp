#include <bits/stdc++.h>
class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_map<char, vector<int>> hg;
        for(int i=0; i<t.size(); i++){
            hg[t[i]].push_back(i);
        }
         int prev = -1;
        for(char c: s){
            // iterator to find the char 
            auto it = hg.find(c);
            //if iterator reached end , return false, i.e doesnt exist
            
            if(it == hg.end()) return false;
            //iterator to make a vector corresponding to char
            auto vec = it->second;
            
            //upperbound returns the value greater than the value in the range
            //upperbound( start range, end range, value greater than )
            //subtracticting the begin index to get the exact pos
            int pos = upper_bound(vec.begin(), vec.end(), prev) - vec.begin(); 
            
            //if pos == vector.size meaning didnt find it
            
            if(pos == vec.size()) return false;

            //next time prev = vector[pos ] lowest value admitted 
            prev = vec[pos];
        }
        return true;
    }
};