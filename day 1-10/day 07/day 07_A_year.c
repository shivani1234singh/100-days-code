#include <stdio.h>

//   Write a program to input a year and check whether it is a leap year or not using conditional statements.

int main(){
	int year;
	printf("enter a year: ");
	scanf("%d",&year);
	if(year%4==0 && year%400==0 && year%100!=0){
		printf("the year is a leap year ");
	}
	else{
		printf("the year is not a leap year ");
	}
	return 0;
}
