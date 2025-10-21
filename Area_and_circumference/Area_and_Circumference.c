#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int radius = 0;
float area = 0;
float circumference =0;
int choice = 0;
char cont = '\0';
float pi = 3.14;
int main(){
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("What do you want to calculate ?\n1. Area\n2. Circumference\nEnter your input(1-2): ");
    scanf("%d", &choice);
    if (choice==1){
        printf("The formula for calculating area of a circle is = pi*(r^2)\n");
        area= pi * pow(radius,2);
        printf("The area of the given circle is :%.2f square units", area);
    }
    else if(choice==2){
        printf("The formula for calculating the Circumference of a circle is = 2*pi*r\n");
        circumference= 2*pi*radius;
        printf("The circumference of the given circle is :%.2f units", circumference);
    }
    else{
        printf("Invalid Input!! PLease enter a valid input!");
        main();
    };
    return 0;
};