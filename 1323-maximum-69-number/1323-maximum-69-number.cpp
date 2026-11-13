class Solution {
public:
    int maximum69Number (int num) {
        
        vector<int> aux ;
        int number = 0 ;

        while(num > 0 ){
            aux.push_back(num % 10 ) ;
            num /=  10 ;
        }

        reverse(aux.begin() , aux.end() ) ;
        int count = 1 ;

        for(int i = 0 ; i < aux.size() ; i++) {
            if(aux[i] == 6  && count == 1){
                aux[i] = 9 ;
                count--;
            }
        }
        for(int i = 0 ; i < aux.size() ; i++) {
            number = (number * 10) + aux[i] ;
        }

        return number ;
    }
};