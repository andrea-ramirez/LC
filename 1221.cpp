class Solution {
public:
    int balancedStringSplit(string s) {
        int Rs = 0;
        int Ls = 0;
        int i = 0;
        int resp = 0;
        while(i < s.size()){
            if(s[i] == 'L'){
                Ls++;
            }else{
                Rs++;
            }
            
            if(Ls == Rs){
                resp++;
                Rs = 0;
                Ls= 0;
            }
            i++;
        }
        return resp;
    }
};
