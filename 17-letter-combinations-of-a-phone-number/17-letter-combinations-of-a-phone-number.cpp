class Solution {
public:
    string keys[10]= {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int keypad(int num, vector<string> &output){
          if(num<10){
        for(int i=0; i<keys[num].size() ; i++)
        {
            output[i]=keys[num][i];
        }
        return keys[num].size(); //in case of 0 and 1 keypad , it returns 0 instead of empty string 
    }
//         if(num==0 || num==1){
//             output[0]="";
//             return 1;
//         }
        
        string curr= keys[num%10];
        int len= curr.size();
        int sa= keypad(num/10,output);
        
        
        for(int copy=1; copy<=len-1; copy++){
            for(int idx=0; idx<sa; idx++){
                output[copy*sa + idx]= output[idx];
            }
        }
        
        
         for(int i=0; i<sa*len; i++){
        output[i]= output[i]+curr[i/sa];
    }
    
    return len* sa;
}
        
        
    
    vector<string> letterCombinations(string digits) {
        int num;
        if(digits.size()!=0)
           num= stoi(digits);
        else
            num=0;
        vector<string> output(100);
        int n= keypad(num, output);
        vector<string> finali(n);
        for(int i=0;i<n; i++){
            finali[i]= output[i];
        }
        return finali;
    }
};