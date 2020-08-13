class Solution {
public:
    int binaryGap(int N) {
        int cont = 0, max = 0;
        bool flag = false;
        while(N/2 > 0){
            if(N%2 == 1){
                flag = true;
            }
            if(flag){
                cont++;
                if(N%2 == 1){
                    if(cont > max){
                        max = cont;
                    }
                    cont = 0;
                }
            }
            N/=2;
        }
        
        if(flag){
            cont++;   
        }
        if(N ==1){
            if(cont > max){
                max = cont;
            }
        }
        
        return max;
    }
};