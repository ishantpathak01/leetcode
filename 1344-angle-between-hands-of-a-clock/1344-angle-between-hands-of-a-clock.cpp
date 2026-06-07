class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minn=minutes*6;
        double hourr=(hour%12)*30 + (minn)/12;
        double angle=abs(minn-hourr);
        if(angle > 180){
            return (360-angle);
        }
        return angle;
    }
};