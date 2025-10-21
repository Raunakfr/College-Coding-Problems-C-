#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int intarray[1000] = {0};
char chararray[1000][100] = {'\0'};
int choice = 0;
int choicestr = 0;
bool foundi = false; 
bool founds = false;
int numintarray = 0;
int numstrarray = 0;

int main(){
    printf("How many numbers do you want to enter in the int array?: ");
    scanf("%d", &numintarray);
    for(int l1 = 0; l1<numintarray; l1++){
        printf("Enter the value to be inserted in the array at index %d: ", l1);
        scanf("%d", &intarray[l1]);
        getchar();
    }
    printf("How many strings do you want to enter in the str array: ");
    scanf("%d", &numstrarray);
    for(int l2 = 0; l2<numstrarray; l2++){
        printf("What type is your string?\n1. Single word\n2. Multi word\nPlease enter your choice(1-2): ");
        scanf("%d", &choicestr);
        getchar();
        switch(choicestr){
            case 1:
                printf("Enter the word to be input in the str array at index %d: ", l2);
                scanf("%s", chararray[l2]);
                getchar();
                break;
            case 2:
                printf("Enter the multi word to be put in the str array at index %d: ", l2);
                fgets(chararray[l2], 1000, stdin);
                chararray[l2][strcspn(chararray[l2], "\n")] = '\0';
                break;
        }
        
    }
    printf("Enter the type of array you want to perform the search in:\n1. Int type\n2. Char type\nEnter your input(1-2): ");
    scanf("%d", &choice);
    getchar();
    switch(choice){
        case 1:
            int isquery = 0;
            printf("What do you want to search for ?: ");
            scanf("%d", &isquery);
            getchar();
            for(int i = 0; i<numintarray; i++){
                if(intarray[i]==isquery){
                    printf("%d was found in Int type array at index: %d",isquery, i);
                    foundi=true;
                    break;
                }
            }
            if(foundi!=true){
                printf("%d was not found in Int type array at any index",isquery);
            }
            break;
        case 2:
            char csquery[100] = {'\0'};
            printf("Enter the string to be searched: ");
            fgets(csquery, 100, stdin);
            csquery[strlen(csquery)-1] = '\0';
            for(int l3 = 0; l3<numstrarray; l3++){
                if(strcmp(csquery, chararray[l3]) == 0){
                    printf("The word %s was found in the char array at index: %d", csquery, l3);
                    founds = true;
                    break;
                }
            }
            if(founds!=true){
                printf("The word %s was not found in the char array at any index!", csquery);
            }
            break;
    }
    return 0;
}