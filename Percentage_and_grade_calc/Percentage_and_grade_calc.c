#include <stdio.h>

int sub1 = 0;
int sub2 = 0;
int sub3 = 0;
int sub4 = 0;
int sub5 = 0;
int sum = 0;
float np = 0;

int main(){
    printf("Enter the marks obtained in all subjects one by one: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    printf("The total marks obtained out of 500 are: %d\n", sum);
    np=((sum/500.0)*100.0);
    printf("The percentage obatined is: %.2f\n", np);
    if(100>=np && np>=90){
        printf("You've got A grade!");
    }
    else if(90>np && np>=80){
        printf("You've got B grade!");
    }
    else if(80>np && np>=60){
        printf("You've got C grade!");
    }
    else{
        printf("You've got D grade!");
    }
    
    return 0;
}
