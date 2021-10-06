#include <stdio.h>

int main() {
    unsigned char a;
    int b;
    char y;
    float r;
    float pi = 3.14159265359;
    float radius;



    printf("start of 4.2.1\n");

    printf("Enter value of a: ");
    scanf("%x",&a);
    printf("Enter value of b: ");
    scanf("%x",&b);

    printf("Value of a: Hex: %x, Decimal: %d\n",a,a);
    printf("Value of b: Hex: %x, Decimal: %d\n",b,b);

    printf("end of 4.2.1\n");


    printf("do you wish to proceed to 4.2.2? (0/1)\n");
    scanf("%d",&y);

    if (y == 1){
        printf("define a raidius: ");
        scanf("%f",&r);
        float test = r * r * pi;
        printf("%f",test);

    }

    if (y == 0){
        return 0;
    }

    printf("do you wish to proceed to 4.2.3? (0/1)\n");


    if (y == 1){

    }


    if (y == 0){
        return 0;
    }
}
