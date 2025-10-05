#include <stdio.h>

//  Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


int main(){
	int l,b,area,perimeter;
	printf("enter length: ");
	scanf("%d",&l);
	printf("enter breadth: ");
	scanf("%d",&b);
	
	area=l*b;
	perimeter=2*(l+b);
	
	printf("the area of rectangle is %d\n",area);
	printf("the perimeter of rectangle is %d\n",perimeter);
	
	return 0;
}
