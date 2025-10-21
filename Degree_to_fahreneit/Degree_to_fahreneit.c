#include <stdio.h>
#include <math.h>

float tempi = 0;
float tempo = 0;

int main(){
    printf("Enter the temperature in celcius: ");
    scanf("%f", &tempi);
    tempo=(tempi*1.8) + 32;
    printf("%.2f degrees celcius in degrees farheniet = %.2f", tempi, tempo);
    return 0;  
};