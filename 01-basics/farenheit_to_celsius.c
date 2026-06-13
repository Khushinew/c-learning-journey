// Converting a Farenheit temperature to Celsius
//Intrpducing a concept of "macro definition"

#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(){
    float farenheit, celsius;

    printf("Enter the temperature in farenheit:");
    scanf("%f",&farenheit);
    
    celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;

}