#include <stdio.h>
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
