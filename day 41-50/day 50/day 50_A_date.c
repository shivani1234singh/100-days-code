#include <stdio.h>

//  Change the date format from dd/04/yyyy to dd-Apr-yyyy.

int main() {
    char date[11]; 
    char day[3], month[3], year[5];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';
    
    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';
    
    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';
    
    if (month[0] == '0' && month[1] == '4') {
        printf("%s-Apr-%s\n", day, year);
    } else {
        printf("Month is not April.\n");
    }
    return 0;
}

