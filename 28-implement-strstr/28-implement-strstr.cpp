class Solution {
public:
    int strStr(string haystack, string needle) {
            int index=0;
            int len1= haystack.size();
            int len2= needle.size();
            if(len1==0 && len2==0)
                return 0;
            if(len1==0)
                return -1;
            if(len2==0)
                return 0;
            if(len2>len1)
                return -1;
            
            
          int j=0;
         for (int i = 0; i < len1; ++i)
        if (haystack[i] == needle[0])
        {
            for (j = 1; j < len2; ++j)
                if (haystack[i + j] != needle[j])
                    break;

            if (j == len2)
                return i;
        }

    return -1;
    }
};