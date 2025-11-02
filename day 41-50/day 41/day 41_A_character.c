#include <stdio.h>

//  Count characters in a string without using built-in length functions.

int main() {
    char str[100]; 
    int count=0 , i=0 ;  
	printf("enter a string: ");
	scanf("%s",str);      
    while (str[i] != '\0') {
        count++;
        i++;     
    }
    printf("The number of characters in the string is: %d\n", count);
    return 0;
}
