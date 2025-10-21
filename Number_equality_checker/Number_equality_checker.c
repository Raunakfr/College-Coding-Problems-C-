#include <stdio.h>

 int num1 = 0;
 int num2 = 0;
 
 int main(){
    printf("Enter the value for the first number: ");
    scanf("%d", &num1);
    printf("Enter the value for the second number: ");
    scanf("%d", &num2);
    if(num1==num2){
        printf("Both the user entered numbers are equal!");
    }
    else{
        printf("The user entered numbers are not equal!");
    };
    return 0;
 }