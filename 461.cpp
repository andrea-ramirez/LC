class Solution {
public:
    string toBinary(int num){
        string ans = "";
        
        while(num > 1){
            ans = to_string(num%2) + ans;
            num /= 2;
        }
        ans = to_string(num) + ans;
        
        return ans;
    }
    
    int hammingDistance(int x, int y) {
        string num1 = toBinary(x);
        string num2 = toBinary(y);
        
        if(num1.length() != num2.length()){
            int dif = num1.length() - num2.length();
        
            if(dif < 0){
                while(dif != 0){
                    num1 = "0" + num1;
                    dif++;
                }
            }else{
                while(dif != 0){
                    num2 = "0" + num2;
                    dif--;
                }
            }
        }
        
        int count =0;
        
        for(int i = 0; i <num1.length(); i++){
            if(num1[i] != num2[i]){
                count++;
            }
        }
        
        return count;
    }
};
