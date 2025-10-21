#include <stdio.h>

int rows1 = 0;
int columns1 = 0;
int matrix[1000][1000] = {0};
int sumdiagonal = 0;
char choice = '\0';

int main(){
    matrixinput: printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of colums in the matrix: ");
    scanf("%d", &columns1);
        for(int i = 1; i<=rows1; i++){
            for(int j = 1; j<=columns1; j++){
                printf("Enter the element at [%d][%d]: ",i, j);
                scanf("%d", &matrix[i-1][j-1]);
            }
        }
        printf("The entered matrix is: \n");
        for(int i = 0; i<rows1; i++){
            for(int j = 0; j<columns1; j++){
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("Is the matrix entered correctly ?(y/n): ");
        scanf(" %c", &choice);
        if(choice == 'y'){
            for(int i = 0; i<rows1; i++){
                for(int j = 0; j<columns1; j++){
                    if(i==j){
                        sumdiagonal += matrix[i][j];
                    }
                    
                    else{
                        continue;
                    }
                }
            }
            printf("The sum of diagonal elements is: %d", sumdiagonal);
        }
        else{
            goto matrixinput;
        }
    return 0;
}