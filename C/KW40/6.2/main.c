#include <stdio.h>
#include <string.h>

int main(void) {
    char word[50];
    int end;
    char x = 0;
    char i = 3;
    printf("Enter a word and I'll give it to you backwards:\n ");
    printf("--------------------------------\n");
    scanf("%s", word);
    end = strlen(word) - 1;
    int length = strlen(word);
    char spaces[50] = " ";
    printf("%s", word);
    printf("\n");
    for(x=2; word[x]!='\0'; x++ ) {
        int y = length - x;//y is the difference between the word length and x, so the order is switched
        printf("%c", word[x-1]);
        for (i = 2; i < length; i ++) {
            printf("%s", spaces);
        }
        printf("%c", word[y]);
        printf("\n");
    }
    for (x = end; x >= 0; x--) {
        printf("%c",word[x] );
    }
    printf("\n");
    return 0;
}