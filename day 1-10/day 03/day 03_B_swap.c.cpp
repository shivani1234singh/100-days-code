#include <stdio.h>


//  Write a program to swap two numbers using a third variable.


int main(){
	int a,b,c;
	printf("enter the first no :");
	scanf("%d",&a);
	
	printf("enter the second number :");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("after swapping the nos the value of a is %d\n",a);
	printf("after swapping the nos the value of b is %d\n",b);
	return 0;
	
}
