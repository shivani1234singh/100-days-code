#include <stdio.h>
#include <math.h>

//  Write a program to calculate simple and compound interest for given principal, rate, and time.

int main(){
	float P,R,T,SI,A,CI;
	printf("enter the value of principal :");
	scanf("%f",&P);
	printf("enter the value of rate in percent :");
	scanf("%f",&R);
	printf("enter the time in years :");
	scanf("%f",&T);
	SI=(P*R*T)/100;
	A=P*pow((1+R/100),T);
	CI=A-P;
	printf("the simple interest is %f\n",SI);
	printf("the compund interest is %f",CI);
	return 0;
	
}
