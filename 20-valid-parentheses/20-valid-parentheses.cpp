#include<stack>
class Solution {
public:
    bool isValid(string input) {
        stack<char> s;
	int length= input.size();
	int i=0;
	while(i<length){
		if( input[i]==')'||input[i]==']'||input[i]=='}'){
            if(s.empty())
                return false;
			char ch= s.top();
			switch(ch){
				case'(': {
					if(input[i]!=')')
						return false;
					break;
				}
				case'[': {
					if(input[i]!=']')
						return false;
					break;
				}
				case'{': {
					if(input[i]!='}')
						return false;
					break;
				}
			}
            s.pop();
		}
		else if(input[i]=='(' ||input[i]=='[' || input[i]=='{'){
			s.push(input[i]);
		}
		i++;
	}
    return s.empty();
    }
};