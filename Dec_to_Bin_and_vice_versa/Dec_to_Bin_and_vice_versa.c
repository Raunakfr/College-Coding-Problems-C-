#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int choice = 0;
char binary[100] = {'\0'};
int reps = 0;
int i = 0;
int idec = 0;
char ans[1000] = {'\0'};
int donefrfr[1000] = {0};
int maybenot = 0;

int main(){
    printf("What do you want to convert?\n1. Decimal to Binary\n2. Binary to Decimal\nEnter your choice(1-2): ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            int decimal = 0;
            printf("Enter the decimal to converted to binary: ");
            scanf("%d", &decimal);
            idec = decimal;
            while (decimal/2 !=0){
                int rem = 0;
                rem = decimal%2;
                binary[i] = rem + '0';
                decimal = decimal/2;
                reps ++;
                i++;
            }
            if(decimal/2==0){
                int rem = 0;
                rem = decimal%2;
                binary[i] = rem + '0';
                reps++;
            }
            printf("%d in binary is: ", idec);
            for(int j=(reps-1); j>=0; j--){
                printf("%c", binary[j]);
            }
            break;
        case 2:
            int nahhomieiamdone = 0;
            printf("How many digits are there in the binary number?: ");
            scanf("%d", &nahhomieiamdone);
            for(int k = 0; k<nahhomieiamdone; k++){
                printf("Enter the digit of the binary number at index %d: ", k);
                scanf("%d", &donefrfr[k]);
            }
            for(int l = (nahhomieiamdone-1); l>=0; l--){
                maybenot += (donefrfr[l])*pow(2, (nahhomieiamdone-l));
            }
            printf("The entered number in decimal is: %d", (maybenot/2));
            break;
        default:
            printf("User input must be between 1 and 2 !!!");
    }
}
