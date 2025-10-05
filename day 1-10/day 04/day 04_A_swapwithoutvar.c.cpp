#include <stdio.h>

//   Write a program to swap two numbers without using a third variable.

int main(){
	int a,b;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping the values a is %d\n",a);
	printf("after swapping the values b is %d\n",b);
	return 0;
}
