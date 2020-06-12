class Solution {
public:
    int balancedStringSplit(string s) {
        int cont = 0;
        int balance = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                balance ++;
            } else if (s[i] == 'L') {
                balance--;
            }
            if (balance == 0) {
                cont++;
            }
        }
        return cont;
    }
};
