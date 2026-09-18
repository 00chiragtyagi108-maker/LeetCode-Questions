class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        bitset<31> A(a) ;
        bitset<31> B(b) ;
        bitset<31> C(c) ;

        int flip = 0 ;

        for(int i = 0;i < 31 ;i++){
            if(( A[i] | B[i] ) != C[i]){
                if(A[i] == B[i] && A[i] == 1){
                    flip += 2 ;
                }
                else if(A[i] == B[i] && A[i] == 0){
                    flip += 1 ;
                }
                else {
                    flip += 1 ;
                }
            }
        }
        return flip ;
    }
};