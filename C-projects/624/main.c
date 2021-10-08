#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {

    int i = 0;
    char z;
    char n[] = {0};
    const char s[2] = " ";
    char *token;

    printf("bitte geben sie ein zeichen ein, welches für die anzeige verwendet wird");
    scanf("%c",z);
    printf("Bitte geben Sie die Diagrammwerte ein (durch Leerschlag getrennt):");
    scanf("%s",n);

    while( token != NULL) {
        printf( " %s\n", token );
        token = strtok(NULL, s);
        i++;
    }

    for (int i = 0; i < n; ++i) {


    }


}
