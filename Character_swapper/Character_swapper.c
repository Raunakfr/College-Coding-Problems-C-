#include <stdio.h>

int char1 = 0;
int char2 = 0;
int temp = 0;

int main(){
    printf("Enter first number: ");
    scanf("%d", &char1);
    printf("Enter second number: ");
    scanf("%d", &char2);
    printf("The two numbers are: \n1. %d\n2. %d \n", char1, char2);
    temp = char1;
    char1=char2;
    char2=temp;
    printf("The two numbers after swapping are: \n1. %d\n2. %d", char1, char2);
    
}