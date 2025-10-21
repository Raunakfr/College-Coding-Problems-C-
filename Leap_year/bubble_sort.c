#include<stdio.h>

int sortnum[1000] = {0};
int numnum = 0;

int bubblesort(int sortnum[1000]){
    for(int l2 = numnum-1; l2>0; l2--){
        if(sortnum[l2]<sortnum[l2-1]){
            int temp = 0;
            temp = sortnum[l2];
            sortnum[l2] = sortnum[l2-1];
            sortnum[l2-1] = temp;
            bubblesort(sortnum);
        }
        else{
            continue;
        }
    }
    return 0;
}

int main(){
    printf("How many numbers do you want to sort?: ");
    scanf("%d", &numnum);
    for(int l1 = 0; l1<numnum; l1++){
        printf("Enter the number to be input in the array at the index %d: ", l1);
        scanf("%d", &sortnum[l1]);
    }
    bubblesort(sortnum);
    for(int l3 = 0; l3<numnum; l3++){
        printf("%d ", sortnum[l3]);
    }
    return 0;
}