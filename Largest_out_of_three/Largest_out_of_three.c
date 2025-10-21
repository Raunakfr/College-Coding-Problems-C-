#include <stdio.h>

int char1 = 0;
int char2 = 0;
int char3 = 0;
int ilarge = 0;
int flarge = 0;

int main(){
    printf("Enter the first number: ");
    scanf("%d", &char1);
    printf("Enter the second number: ");
    scanf("%d", &char2);
    printf("Enter the third number: ");
    scanf("%d", &char3);
    if(char1>char2){
        ilarge=char1;
    }
    else if(char1<char2){
        ilarge=char2;
    }
    else{
        ilarge=char1;
    }
    if(ilarge>char3){
        flarge=ilarge;
    }
    else if(ilarge<char3){
        flarge=char3;
    }
    else{
        flarge=ilarge;
    };
    printf("The largest number out of the three is: %d", flarge);
    return 0;
}