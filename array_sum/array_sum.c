#include <stdio.h>
#include <stdlib.h>

int array1[100] = {0};
int array2[100] = {0};
int num = 0;
int sumarray[100] = {0};

int main(){
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &num);
    for(int i = 0; i<num; i++){
        printf("Enter the number to be put in the first array: ");
        scanf("%d", &array1[i]);
    }
    printf("First array is:\n");
    for(int i = 0; i<num; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");
    for(int i = 0; i<num; i++){
        printf("Enter the number to be put in the second array: ");
        scanf("%d", &array2[i]);
    }
    printf("First second array is:\n");
    for(int i = 0; i<num; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");
    for(int i = 0; i<num; i++){
        sumarray[i] = array1[i]+array2[i];
    }
    printf("The sum of the elements from the array is:\n");
    for(int i = 0; i<num; i++){
        printf("%d + %d = %d, ", array1[i], array2[i], sumarray[i]);
    }
    return 0;
}