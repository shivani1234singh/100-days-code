#include <stdio.h>
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
