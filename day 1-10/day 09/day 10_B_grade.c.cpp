#include <stdio.h>
int main(){
	int percent;
	printf("enter your percentage :");
	scanf("%d",&percent);
	if(percent>=90){
		printf("grade A");
	}
	else if(percent>=80){
		printf("grade B");
	}
	else if(percent>=70){
		printf("grade C");
	}
	else if(percent>=60){
		printf("grade D");
	}
	else{
		printf("grade F");
	}
	return 0;
}


