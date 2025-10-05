#include <stdio.h>

//  Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.


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


