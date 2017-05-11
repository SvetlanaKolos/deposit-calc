#include "deposit.h"
#include <stdio.h>

int main (){
	int ye,date,d,c;
	printf ("Enter the Deposit amount:");
	scanf("%d",&ye);
	if (ye<10){printf ("incorrect amount");
    return 0;
}
    printf ("Enter the Deposit term:");
	scanf("%d",&date);
	if ((date>365)||(date<=0)){printf ("incorrect data");
    return 0;
}
	if (ye<100) d=1;
		else d=2;
        if (date<=30) c=FirstSrok0_30(d,ye);
        if ((date<=120) && (date>=31)) c=SecondSrok31_120(d,ye);
        if ((date<=240) && (date>=121)) c=ThirdSrok121_240(d,ye);
        if ((date<=365) && (date>=241)) c=FourthSrok241_365(d,ye);
	printf ("Final summ:");
	printf ("%d",c);
	return 0;
}
