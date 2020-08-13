class Solution {
public:
    string addBinary(string a, string b) {
        int sizeA = a.size();
        int sizeB = b.size();
        string result = "";
        
        //llenar con 0s para que sean del mismo tamaño
        if(sizeA > sizeB){
            for(int i = 0; i < sizeA- sizeB; i++){
                b = "0" + b;
            }
        }else if(sizeB > sizeA){
            for(int i = 0; i < sizeB- sizeA; i++){
                a = "0" + a;
            }
        }
        
        int carry = 0, r = 0;
        int s1 = 0, s2 = 0;
        //recorrer de la derecha a la izquierda para ir comparando
        for(int i = a.size()-1; i >= 0; i--){
            if (a[i] == '1'){ s1 = 1;}
            else{ s1 = 0;}
            
            if (b[i] == '1'){ s2 = 1;}
            else{ s2 = 0;}
            
            r = carry + s1 + s2;
            if(r == 0){
                carry = 0;
                result = '0' + result;
            }else if(r == 1){
                carry = 0;
                result = '1' + result;
            }else if(r ==2){
                carry = 1;
                result = '0' + result;
            }else if(r == 3){
                carry = 1;
                result = '1' + result; 
            }
            r = 0;   
        }
        
        if(carry ==1){
            result = "1" + result;
        }
        
        return result;
        
    }
};