#include <stdio.h>

//Q1: Write a program to input two numbers and display their sum.

int main(){
	int a,b,sum;
	printf("enter the first no: ");
	scanf("%d",&a);
	printf("enter the second no: ");
	scanf("%d",&b);
	sum=a+b;
	printf("the sum of the numbers is %d",sum);
	return 0;
}
