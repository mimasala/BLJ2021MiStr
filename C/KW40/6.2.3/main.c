#include <stdio.h>
#include <string.h>

int compare(char[], char[]);

int main()
{
    char str1[50] = {0}; // declare and initialize the size of string array.
    char str2[50] = {0};
    int tmp = 0;
    printf (" Enter a string to be reversed: ");
    scanf( "%s", str1);
    strcpy(str2, str1);
    strrev(str2);
    tmp = compare(str1, str2);
    if(tmp == 0){
        printf("it is an anagramme ");
    } else {
        printf("no anagramme Sadge");
    }
    return 0;
}
int compare(char a[],char b[])
{
    int flag=0,i=0;  // integer variables declaration
    while(a[i]!='\0' &&b[i]!='\0')  // while loop
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        return 0;
    else
        return 1;
}