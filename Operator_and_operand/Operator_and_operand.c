#include <stdio.h>

float op1 = 0.0;
float op2 = 0.0;
int operatorr = 0;
float result = 0.0;

int main(){
    printf("Enter the first operand: ");
    scanf("%f", &op1);
    printf("Enter the second operand: ");
    scanf("%f", &op2);
    printf("Enter the operation to be performed:\n1. +\n2. -\n3. /\n4. *\nEnter your choice(1-4): ");
    scanf("%d", &operatorr);
    switch(operatorr){
        case 1:
            result=op1+op2;
            break;
        case 2:
            result=op1-op2;
            break;
        case 3:
            if(op2==0){
                printf("Can't divide by 0!\n");
            }
            else{
                result=op1/op2;
                break;
            };
        case 4:
            result=op1*op2;
            break;
        default:
            printf("Invalid input!");
            break;
    }
    printf("The result after performing operations is: %.2f", result);
    return 0;
}