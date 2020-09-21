class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        bool flag = false;
        
        while(!flag){
            while(num/10 > 0){
                sum += num%10;
                num/=10;
            }
            sum += num;
            if(sum < 10){
                flag = true;
            }else{
                flag = false;
                num = sum;
                sum = 0;
            }
        }
        
        
        return sum;
    }
};
