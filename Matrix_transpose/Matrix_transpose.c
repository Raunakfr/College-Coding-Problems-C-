#include <stdio.h>

int rows1 = 0;
int columns1 = 0;
int mat1[1000][1000] = {0};
char choice = '\0';

int main(){
    matin: printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of colums in the matrix: ");
    scanf("%d", &columns1);
    if(rows1 == columns1){
        for(int i = 1; i<=rows1; i++){
            for(int j = 1; j<=columns1; j++){
                printf("Enter the element at [%d][%d]: ",i, j);
                scanf("%d", &mat1[i-1][j-1]);
            }
        }
        printf("The entered matrix is: \n");
        for(int i = 0; i<rows1; i++){
            for(int j = 0; j<columns1; j++){
                printf("%d ", mat1[i][j]);
            }
            printf("\n");
        }
        printf("Is the matrix entered correctly ?(y/n): ");
        scanf(" %c", &choice);
        if(choice == 'y'){
            np: printf("The transpose of the matrix is: \n");
            for(int i = 0; i<rows1; i++){
            for(int j = 0; j<columns1; j++){
                printf("%d ", mat1[j][i]);
                }
            printf("\n");
            }
        }
        else if(choice == 'n'){
            goto matin;
        }
        else{
            goto np;
        }
    }
    else{
        for(int i = 1; i<=rows1; i++){
            for(int j = 1; j<=columns1; j++){
                printf("Enter the element at [%d][%d]: ",i, j);
                scanf("%d", &mat1[i-1][j-1]);
            }
        }
        printf("The entered matrix is: \n");
        for(int i = 0; i<rows1; i++){
            for(int j = 0; j<columns1; j++){
                printf("%d ", mat1[i][j]);
            }
            printf("\n");
        }
        printf("Is the matrix entered correctly ?(y/n): ");
        scanf(" %c", &choice);
        if(choice == 'y'){
            np1: printf("The transpose of the matrix is: \n");
            for(int i = 0; i<columns1; i++){
            for(int j = 0; j<rows1; j++){
                printf("%d ", mat1[j][i]);
                }
            printf("\n");
            }
        }
        else if(choice == 'n'){
            goto matin;
        }
        else{
            goto np1;
        }
    }
    return 0;
}