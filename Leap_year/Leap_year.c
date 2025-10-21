#include <stdio.h>

int year = 0;
int rem = 0;

int main(){
    printf("Enter the year to be checked: ");
    scanf("%d", &year);
    rem=year%4;
    if(rem==0){
        printf("It is a leap year!");
    }
    else{
        printf("It is NOT a leap year!");
    }
    return 0;
}