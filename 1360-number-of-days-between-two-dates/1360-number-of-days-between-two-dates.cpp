class Solution {
public:

    bool isLeap(int year){
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 )) ;
            
    }

    int getDays(string date){

        vector<int> Days = {0,31,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int year = stoi(date.substr(0,4));
        int day = stoi(date.substr(8,2)) ;
        int month = stoi(date.substr(5,2)) ;

        int days = 0;
        for(int i = 1900 ; i < year ; i++ ){

            days += isLeap(i) ? 366 : 365 ;
        }

        for(int i = 0; i < month ; i++){
            days += Days[i] ;

            if(i == 2 && isLeap(year))
                days += 1;
        }

        days += stoi(date.substr(8,2));

        return days ;
    }

    int daysBetweenDates(string date1, string date2) {
        
        return abs(getDays( date1 ) - getDays( date2 ));
    }
};