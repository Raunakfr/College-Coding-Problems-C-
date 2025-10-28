#include <stdio.h>
#include <string.h>

int fn = 0;
char string[1000] = {'\0'};

int strlenn(){
    int i = 0;
    int count = 0;
    printf("Enter the string whose length has to be calculated: ");
    getchar();
    fgets(string, 1000, stdin);
    printf("The string has been input, processing!!\n");
    while(string[i]!= '\0'){
        count ++;
        i++;
    }
    printf("The number of characters in the string is: %d", count-1);
}

char strcatt(){
    int i = 0;
    char str1[1000] = {"\0"};
    char str2[1000] = {"\0"};
    char str3[1000] = {"\0"};
    printf("Enter the first string: ");
    getchar();
    fgets(str1, 1000, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(str2, 1000, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);
    for(int i = 0; i<len1; i++){
        if(str1[i]!= '\0'){
            str3[i] = str1[i];
        }
        else{
            continue;
        }
    }
    for(int i = 0; i<len2; i++){
        if(str2[i]!= '\0'){
            str3[len1+i] = str2[i];
        }
        else{
            continue;
        }
    }
    printf("The concatenated string is: %s", str3);
}

char strcpyy(){
    char string1[1000] = {"\0"};
    printf("Enter the string to be copied: ");
    getchar();
    fgets(string1, 1000, stdin);
    char *location1 = string1;
    char string2[1000] = {'\0'};
    char *location2 = string2;
    location2 = string1;
    printf("The string has been copied, here is the string: %s", location2);
}

char strcmpp(){
    char str1[1000] = {'\0'};
    char str2[1000] = {'\0'};
    printf("Enter the first string: ");
    getchar();
    fgets(str1, 1000, stdin);
    printf("Enter the second string to be compared with the first string: ");
    fgets(str2, 1000, stdin);
    /*int ascii1 = str1[];
    int ascii2 = str2[];
    printf("The ascii value of %s is %d", ascii1, ascii1);
    printf("The ascii value of %s is %d", ascii2, ascii2);*/

}

int main(){
    printf("Which function do you want to use: \n1. strlen()\n2. strcat()\n3. strcpy() \n4. strcmp()\nPlease enter your input(1-4): ");
    scanf("%d", &fn);
    switch(fn){
        case 1:
            strlenn();
            break;
        case 2:
            strcatt();
            break;
        case 3:
            strcpyy();
            break;
        case 4:
            strcmpp();
            break;
    }
    return 0;
}

