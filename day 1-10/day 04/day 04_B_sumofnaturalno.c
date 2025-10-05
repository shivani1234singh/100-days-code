#include <stdio.h>


//  Write a program to find and display the sum of the first n natural numbers.

int main(){
	int i,n,sum;
	sum=0;
    printf("enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
}
	printf("sum of n natural nos is %d",sum);
	return 0;
}
