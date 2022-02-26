class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)   
            return false;
        if(x<10)
            return true;
        
        string input= to_string(x);
        int len= (int) input.size();
        int current=0;
        while(current<len)
        {
            if(input[current]!=input[len-1])
                return false;
            current++;
            len--;
        }
        return true;
    }
};