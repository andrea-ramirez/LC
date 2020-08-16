class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        char temp;
        int j = size-1;
        for(int i = 0; i < size/2; i++){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
    }
};
