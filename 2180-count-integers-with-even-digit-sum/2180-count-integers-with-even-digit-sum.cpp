class Solution {
public:
    bool evenDigitCount(int number) {
        int sum = 0;
        while(number != 0) {
            sum += number % 10 ;
            number /= 10 ;
        }

        return sum % 2 == 0 ? true:false ;
    }
    int countEven(int num) {

        int count = 0;
        
        for(int i = 1; i <= num ; i++ ) {

            if(evenDigitCount(i))
                count++ ;
        
        }
        return count ;
    }
};