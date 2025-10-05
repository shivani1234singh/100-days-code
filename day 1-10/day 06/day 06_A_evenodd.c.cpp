#include <stdio.h>

//  Write a program to input an integer and check whether it is even or odd using if–else.

int main(){
	int a;
	printf("enter a integer: ");
	scanf("%d",&a);
	if(a%2==0){
		printf("the integer is even ");
	}
	else{
		printf("the integer is odd ");
	}
	return 0;
}
