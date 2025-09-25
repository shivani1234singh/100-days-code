#include <stdio.h>
int main() {
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("it is an uppercase alphabet",ch);
    } 
    else if(ch >= 'a' && ch <= 'z'){
        printf("it is a lowercase alphabet",ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("it is a digit",ch);
    } 
    else{
        printf("it is a special character",ch);
    }
    return 0;
}
