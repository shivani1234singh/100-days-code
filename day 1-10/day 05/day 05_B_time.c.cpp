#include <stdio.h>
int main(){
	int totalseconds,hours,minutes,seconds;
	printf("enter time in seconds :");
	scanf("%d",&totalseconds);
	hours=totalseconds/3600;
	minutes=(totalseconds%3600)/60;
	seconds=totalseconds%60;
	printf("time in H:M:S format is %d:%d:%d",hours,minutes,seconds);
	return 0;

}
