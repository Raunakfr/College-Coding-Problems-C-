#include <stdio.h>

int choiceini = 0;
int array1[100][100] = {0};
int array2[100][100] = {0};
int resultarray[100][100] = {0};
int rows1 = 0, columns1 = 0;
int rows2 = 0, columns2 = 0;

int main() {
    printf("What do you want to perform?\n1. Multiplication\n2. Addition\nEnter your choice(1-2): ");
    scanf("%d", &choiceini);
    switch(choiceini){
        case 1:
            printf("Enter the number of rows in the first matrix: ");
            scanf("%d", &rows1);
            printf("Enter the number of columns in the first matrix: ");
            scanf("%d", &columns1);
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < columns1; j++) {
                    printf("Enter element for first matrix [%d][%d]: ", i+1, j+1);
                    scanf("%d", &array1[i][j]);
                }
            }
            printf("Enter the number of rows in the second matrix: ");
            scanf("%d", &rows2);
            printf("Enter the number of columns in the second matrix: ");
            scanf("%d", &columns2);
            if (columns1 != rows2) {
                printf("Matrix multiplication not possible! (columns1 != rows2)\n");
                return 0;
            }
            for (int i = 0; i < rows2; i++) {
                for (int j = 0; j < columns2; j++) {
                    printf("Enter element for second matrix [%d][%d]: ", i+1, j+1);
                    scanf("%d", &array2[i][j]);
                }
            }
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < columns2; j++) {
                    resultarray[i][j] = 0;
                    for (int k = 0; k < columns1; k++) {
                        resultarray[i][j] += array1[i][k] * array2[k][j];
                    }
                }
            }
            printf("\nResultant Matrix:\n");
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < columns2; j++) {
                    printf("%d ", resultarray[i][j]);
                }
                printf("\n");
            }
        case 2:
            printf("Enter the number of rows in the first matrix: ");
            scanf("%d", &rows1);
            printf("Enter the number of columns in the first matrix: ");
            scanf("%d", &columns1);
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < columns1; j++) {
                    printf("Enter element for first matrix [%d][%d]: ", i+1, j+1);
                    scanf("%d", &array1[i][j]);
                }
            }
            printf("Enter the number of rows in the second matrix: ");
            scanf("%d", &rows2);
            printf("Enter the number of columns in the second matrix: ");
            scanf("%d", &columns2);
            if (rows1 != rows2 || columns1 != columns2) {
                printf("Matrix Addition not possible! (Dimensions not same)\n");
                return 0;
            }
            for (int i = 0; i < rows2; i++) {
                for (int j = 0; j < columns2; j++) {
                    printf("Enter element for second matrix [%d][%d]: ", i+1, j+1);
                    scanf("%d", &array2[i][j]);
                }
            }
            for(int i = 0; i<rows1; i++){
                for(int j = 0; j<columns1; j++){
                    resultarray[i][j] = 0;
                    for(int k = 0; k<columns2; k++){
                        resultarray[i][j] = array1[i][k] + array2[j][k];
                    }
                }
            }
            printf("\nResultant Matrix:\n");
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < columns2; j++) {
                    printf("%d ", resultarray[i][j]);
                }   
                printf("\n");
            }
    }
    return 0;
}
