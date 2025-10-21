#include <stdio.h>

int num = 0;
int factori = 0;

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}

int main(){
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d", &num);
    factori = factorial(num);
    printf("The factorial of %d is %d", num, factori);
}

