#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
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

    return(0);
}

