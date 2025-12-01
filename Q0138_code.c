//Print all enum names and integer values using a loop.

#include <stdio.h>


enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    TOTAL_LIGHTS  
};

int main() {

    const char* lightNames[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < TOTAL_LIGHTS; i++) {
        printf("%s=%d\n", lightNames[i], i);
    }

    return 0;
}
