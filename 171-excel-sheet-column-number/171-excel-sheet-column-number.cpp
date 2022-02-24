class Solution {
public:
    int titleToNumber(string columnTitle) {
      
    int len=columnTitle.size();   
    if(len==0)
    {
        return 0;
    }
    
    if(len==1)
    {
        int num= columnTitle[0]-64;
        return num;
    }
        
    int smallAns= titleToNumber(columnTitle.substr(1));
    
    int power= pow(26,len-1);
    int current= columnTitle[0]-64;
    
    int num=power*current+smallAns;
    return num;
    }
};