#include<stdio.h>
#include<conio.h>
#include <string.h>
int main()
{


    int h;
    char str[30];
    printf("--------------------------------\nEnter any string :\n");
    gets(str);
    printf("--------------------------------\n");
    printf('%.*s',2,str);
    for(h=0; str[h]; h++){
        printf("%c\n",str[h]);
        }
    strrev(str);
    printf("%s\n",str);

    getch();
}
