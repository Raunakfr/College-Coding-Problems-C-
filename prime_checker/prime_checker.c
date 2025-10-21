#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int numcheck = 0;
bool primeon = true;

int main(){
    printf("Enter the number to be checked: ");
    scanf("%d", &numcheck);
    if(numcheck<=1){
        primeon = false;
    }
    else{
        for(int i=2; i<numcheck; i++){
            if(numcheck%i==0){
                primeon = false;
                break;
            }
        }
    }
    
    if(primeon==false){
        printf("Non Prime");
    }
    else{
        printf("Prime");
    }
}