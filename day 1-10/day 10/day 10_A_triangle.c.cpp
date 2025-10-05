#include <stdio.h>

//  Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

int main(){
	int a,b,c;
	printf("enter the sides of triangle a,b,c :");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c){
		printf("it is an equilateral triangle");
	}
	else if(a==b||a==c||b==c){
		printf("it is an isosceles triangle");
	}
	else{
		printf("it is scalene triangle");
	}
	return 0;
}
