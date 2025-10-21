#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int principal = 0;
float roi = 0;
float t = 0;
int choice = 0;
float amounte = 0;
int compoundnum = 0;
int main(){
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &roi);
    printf("Enter the time for which you are investing: ");
    scanf("%f", &t);
    printf("What type of interest do you want to calculate:\n1. Simple interest\n2. Compound interest\nEnter your input (1-2): ");
    scanf("%d", &choice);
    if(choice==1){
        printf("The formula for simple interest is: a=p(1+rt)\n");
        amounte= (principal*roi*t)/100;
        printf("The simple interest on %d rupees for %.2f years at %.2f percent per year is: %.2f rupees", principal, t, roi, amounte+principal);
    }
    else if(choice==2){
        printf("How many times is the interest compounded per year?: ");
        scanf("%d", &compoundnum);
        printf("The formula for compound interest is: a=(p(1+(r/n))n*t)\n");
        amounte = (principal*pow((1+(roi/compoundnum)), compoundnum*t));
        printf("The compound interest on %d rupees for %.2f years at %.2f percent per year compunded %d times per year is: %.2f", principal, t, roi, compoundnum, amounte);
    }
    else{
        printf("Invalid input!!!!!!!");
    }
    return 0;
}