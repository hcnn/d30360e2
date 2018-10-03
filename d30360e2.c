#include "d30360e2.h"

double d30360e2(int y1, int m1, int d1, 
                int y2, int m2, int d2)
{
    int diff_days = 0u;
    diff_days += (360 * (y2 - y1));
    diff_days += ( 30 * (m2 - m1));
    
    if(!(isaleapyear(y1)) && (m2 == 2) && (d2 == 28)){
        diff_days += (d1 == 29 ? 29 : (d1 >= 30 ? 30 : d2));
    }else if(isaleapyear(y1) && (m2 == 2) && (d2 == 29)){
        diff_days += (d1 >= 30 ? 30 : d2);
    }else{
        diff_days += (d2 > 30 ? 30 : d2);
    }
    
    diff_days -= (d1 > 30 ? 30 : d1);
    
    if( diff_days < 0){
        fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
        exit(-1); 
    }else if(diff_days == 0){
        return 0e0;
    }else{
        return (double)(diff_days) / 360e0;
    }
}

