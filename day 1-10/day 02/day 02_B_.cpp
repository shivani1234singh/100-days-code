#include <stdio.h>
int main(){
	int r,area,circumference;
	printf("enter the radius: ");
	scanf("%d",&r);
	
	area=3.14*r*r;
	circumference=2*3.14*r;
	
	printf("the area of circle is %d\n",area);
	printf("the circumference of circle is %d\n",circumference);
	
	return 0;
	
}
