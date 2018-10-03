#include "d30360e2.h"

double d30360e2(int y1, int m1, int d1, 
                int y2, int m2, int d2)
{
    int diff_days = 0u;
    diff_days += (360 * (y2 - y1));
    diff_days += ( 30 * (m2 - m1));
    
    if(!(isaleapyear(y1)) && (m2 == 2) && (d2 == 28))
    {
        diff_days += (d1 == 29 ? 29 : (d1 >= 30 ? 30 : d2));
    }
    else if(isaleapyear(y1) && (m2 == 2) && (d2 == 29))
    {
        diff_days += (d1 >= 30 ? 30 : d2);
    }
    else
    {   // Den 31. immer auf den 30. setzen
        diff_days += (d2 > 30 ? 30 : d2);
    }
    
    // Den 31. immer auf den 30. setzen
    diff_days -= (d1 > 30 ? 30 : d1);
    
    // Ausgabe
    if( diff_days < 0)
    {   // Werfe Exception
        fprintf(stderr, "Der aktuelle Zahlungstermin D2 ist aelter als der " 
            "vorige Zahlungstermin D1."); exit(-1); 
    }
    else if(diff_days == 0)
    {   // gebe 0.0 aus
        return 0e0;
    }
    else
    {   // Dividiere durch 360 Tage
        return ((double)(diff_days) / 360e0);
    }
}

