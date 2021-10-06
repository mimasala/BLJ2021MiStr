#include <stdio.h>
#include <string.h>

int main() {
    printf("6.2\n");

    char s[100];
    printf("Enter a string to reverse\n");
    gets(s);

    strrev(s);

    printf("Reverse ofthe string: %s\n", s);


    return 0;
}
