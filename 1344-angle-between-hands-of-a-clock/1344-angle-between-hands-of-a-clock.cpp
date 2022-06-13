class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        
        double mod = (hour*30)%360;
        double temp = (double)minutes/2;
        double anglebyhour = mod +temp;
        double anglebymin = minutes*6;
        // cout<<temp<<" "<<anglebymin;
        return min(360-abs(anglebyhour- anglebymin),abs(anglebyhour- anglebymin)) ;
        
        
    }
};