#include <stdio.h>

//  Write a program to input three numbers and find the largest among them using if–else.

int main(){
	int a,b,c;
	printf("enter the three numbers a,b,c: ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>=b && a>=c){
		printf("the greatest number is %d",a);
	}
	else if(b>=a && b>=c){
		printf("the greatest number is %d",b);
	}
	else{
		printf("the greatest number is %d",c);
	}
	return 0;
}
