#include <stdio.h>
#include <math.h>

int len = 0;

int main(){
    for(int i=0; i<100; i++){
        if(i>0 && i<10){
            printf("%d ", i);
        }
        if(i>=10 && i<100){
            int numa = 0;
            int numb = 0;
            int num = 0;
            numb = i%10;
            numa = i/10;
            num = pow(numa, 2) + pow(numb, 2);
            if(num == i){
                printf("%d ", i);
            }
        }
    }
}
