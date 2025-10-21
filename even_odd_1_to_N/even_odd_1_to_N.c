#include <stdio.h>

int N = 0;
int even = 0;
int odd = 0;
int i = 0;

int main(){
    printf("Enter the number till which you want things to be calculated: ");
    scanf("%d", &N);
    while(i!=N){
        if(i%2==0){
            even+=i;
        }
        else{
            odd+=i;
        }
        i++;
    }
    printf("The sum of odd numbers is: %d\n", odd);
    printf("The sum of even numbers is: %d", even);
    return 0;
}