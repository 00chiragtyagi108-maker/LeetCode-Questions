class Solution {
public:
    bool checkDivisibility(int n) {
        
        int aux = n;
        int product = 1;
        int sum = 0;

        while(aux > 0){
            int x = aux % 10;
            product = product * x;
            sum = sum + x;
            aux /= 10;

        }

        return (n % (sum + product) == 0);  
    }
};