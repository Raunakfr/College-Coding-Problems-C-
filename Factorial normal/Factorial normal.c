#include <stdio.h>

int num = 0;
int nump = 1;

int main(){
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d", &num);
    while(num!=0){
        nump*=num;
        num-=1;
    }
    printf("The factorial of the number is: %d", nump);
    return 0;
}