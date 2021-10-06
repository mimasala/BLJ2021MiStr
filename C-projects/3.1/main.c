
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    char cp=80;
    unsigned char uc =-258;
    char cx=120;
    short s=324;
    int i=3200;
    long l=328932;
    float f=3.141593;
    double d=2.717200;
    printf("WERTE DER VARIABLEN\n");
    printf("-------------------------------------------------------------------------\n");
    printf("Variable          Zeichen         dez            hex          okt\n");
    printf("-------------------------------------------------------------------------\n");
    printf("c [char]          'P'             %d             %x          %o\n",cp,cp,cp);
    printf("uc [unsigned char]'P'             %d            %x          %o\n",uc,uc,uc);
    printf("c [char]          'x'             %d            %x          %o\n",cx,cx,cx);
    printf("s [short]                         %d            %x         %o\n",s,s,s);
    printf("i [int]                           %d           %x         %o\n",i,i,i);
    printf("l [long]                          %d         %x       %o\n",l,l,l);
    printf("f [float]                         %f       %x    %o\n",f,f,f);
    printf("d [double]                        %f       %x    %o\n",d,d,d);
    return (EXIT_SUCCESS);
}