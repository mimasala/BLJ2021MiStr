#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

        char str[80] = {0};
        const char s[] = " ";
        char *token;
        char z;


        printf("bitte geben sie ein Zeichen ein, welches fuer die Anzeige verwendet wird:");
        scanf("%c",&z);
        printf("Bitte geben Sie die Diagrammwerte ein (durch Leerschlag getrennt):");
        scanf(" %[^\n]",str);

        /* get the first token */
        token = strtok(str, s);
        /* walk through other tokens */
        while( token != NULL ) {
            int x = atoi(token);
            for(int i = 1; i <= x; i++) {
                printf("%c",z);



            }
            printf("\n");
            token = strtok(NULL, s);

        }





    char str1[20];
    char str2[20];
    int value;
    printf("Enter the first string : ");
    scanf("%s",str1);
    printf("Enter the second string : ");
    scanf("%s",str2);
    // comparing both the strings using strcmp() function
    value=strcmp(str1,str2);
    if(value==0)
        printf("strings are same");
    else
        printf("strings are not same");
    return 0;
}