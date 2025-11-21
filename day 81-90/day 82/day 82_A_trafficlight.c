#include <stdio.h>

//  Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

enum TrafficLight { RED, YELLOW, GREEN };
int main() {
    enum TrafficLight light;
    int color;

    printf("enter the color of light : "); 
	scanf("%d\n",&color);  
	light=color;
    if (light == RED) {
        printf("Stop\n");
    }
    else if (light == YELLOW) {
        printf("Wait\n");
    }
    else if (light == GREEN) {
        printf("Go\n");
    }
    return 0;
}

