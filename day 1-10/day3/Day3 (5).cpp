#include <stdio.h>
int main(){
	float C,F;
	printf("enter temp in celcius: ");
	scanf("%f",&C);
	F=(C*(9/5))+32;
	printf("temp in farenheit is %f",F);
	return 0;
}
