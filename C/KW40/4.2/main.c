#include <stdio.h>

int main() {
    int a;
    int b;
    char y;
    float r;
    double pi = 3.14159265359;
    double test;



    printf("start of 4.2.1\n");

    printf("Enter value of a: ");
    scanf("%i",&a);
    printf("Enter value of b: ");
    scanf("%i",&b);


    printf("0x%x\n", a);
    printf("0x%x\n", b);


    printf("end of 4.2.1\n");


    printf("do you wish to proceed to 4.2.2? (0/1)\n");
    scanf("%d",&y);

    if (y == 1){
        printf("define a raidius: ");
        scanf("%f",&r);
        double test = r * 2 * pi;
        printf("%f",test);

    }

    if (y == 0){
        return 0;
    }

    printf("do you wish to proceed to 4.2.3? (0/1)\n");
    scanf("%d",&y);

    if (y == 1){

    }


    if (y == 0){
        return 0;
    }
}
