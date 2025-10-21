#include <stdio.h>
#include <stdlib.h>

int inpnum = 0;
int inpnum2= 0;
int opnum = 0;
int reps = 0;

int main(){
    printf("Enter the number from where you want to begin the series: ");
    scanf("%d", &inpnum);
    printf("Enter the second number of the series: ");
    scanf("%d", &inpnum2);
    printf("Enter number of elements you want in the series: ");
    scanf("%d", &opnum);
    int *numbers = calloc(opnum, sizeof(int));
    numbers[0] = inpnum;
    numbers[1] = inpnum2;
    for(reps=2; reps<opnum; reps++){
      numbers[reps] = numbers[reps-1]+numbers[reps-2];  
    };
    for(reps=0; reps<opnum; reps++){
      int num = numbers[reps];
      printf("%d ", num); 
    };
    return 0;
}