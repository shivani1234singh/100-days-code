#include <stdio.h>
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
