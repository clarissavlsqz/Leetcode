class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0, aux;
        while (n != 0) {
            aux = n%10;
            n/=10;
            product *= aux;
            sum += aux;
        }
        
        return product - sum;
    }
};
