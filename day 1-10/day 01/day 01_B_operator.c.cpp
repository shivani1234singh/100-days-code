#include <stdio.h>

// Write a program to input two numbers and display their sum, difference, product, and quotient.

int main(){
	int a,b,sum,difference,product,quoitent;
	printf("enter the first no: ");
	scanf("%d",&a);
	printf("enter the second no: ");
	scanf("%d",&b);
	
	sum=a+b;
	difference=a-b;
	product=a*b;
	quoitent=a/b;
	
	printf("the sum is %d\n",sum);
	printf("the difference is %d\n",difference);
	printf("the product is %d\n",product);
	printf("the quoitent is %d\n",quoitent);
	return 0;
}
