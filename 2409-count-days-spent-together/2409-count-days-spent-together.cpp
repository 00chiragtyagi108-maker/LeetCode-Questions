class Solution {
public:

    int getDays(string Date){
        vector<int> Days = {0,31,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int month = stoi(Date.substr(0,2));
        int day = stoi(Date.substr(3,2));

        int total_days = day;

        for(int i = 0 ;i < month ; i++ ){
            total_days += Days[i];
        }
        return total_days ;

    }


    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        vector<int> days = {0,31,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int arrival_A_time = getDays(arriveAlice);
        int leave_A_time = getDays(leaveAlice);

        int arrival_B_time = getDays(arriveBob);
        int leave_B_time = getDays(leaveBob);

        int late_arrive = max(arrival_A_time , arrival_B_time) ;
        int early_leave = min(leave_A_time , leave_B_time) ;

        return max (0,early_leave  - late_arrive + 1);


    }
};