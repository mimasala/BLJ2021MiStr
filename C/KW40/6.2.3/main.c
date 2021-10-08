#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int main(int argc, char const *argv[])
{
    char wort= 0;
    printf("\nanagramme erkennen\n");
    printf("schreiben sie ein wort:");
    scanf("%s",wort);

    strrev(wort);

    /*if(wort == strrev(wort)){

    }*/


}
