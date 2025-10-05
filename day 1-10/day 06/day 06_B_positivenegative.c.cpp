#include <stdio.h>

// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

int main(){
	int a;
	printf("enter the integer ");
	scanf("%d",&a);
	if(a>0){
		printf("the integer is positive");
	}
	else if(a<0){
		printf("the ineteger is negative");
	}
	else if(a==0){
		printf("the ineteger is zero");
	}
	return 0;
}
