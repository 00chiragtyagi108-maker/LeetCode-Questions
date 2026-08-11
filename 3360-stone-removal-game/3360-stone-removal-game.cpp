class Solution {
public:
    bool canAliceWin(int n) {

        if(n < 10) return false;

        int chance = 0;
        int to_remove = 10;

        while(to_remove <= n){
            n -= to_remove;
            to_remove--;
            chance = 1- chance;
        }
        return (chance == 1);
    }
};