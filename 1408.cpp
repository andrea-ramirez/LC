class Solution {
public:
    string reverseWords(string s) {
        stringstream newS(s);
        string mini, r = "";
        
        while(newS >> mini){
            char temp = mini[0];
            for(int i = 0; i < mini.length()/2; i++){
                temp = mini[i];
                mini[i] = mini[mini.length()-i-1];
                mini[mini.length()-i-1] = temp;
            }
        
            r += mini + " ";  
        }
        
        return r.substr(0,r.length()-1);
    }
};
