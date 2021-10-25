#include <stdio.h>
int anrede1(){
    printf("Guten Tag Herr XY\n");
}
int anrede2(int parameter){
    if (parameter == 0){
        printf("Guten Tag Herr XY\n");
    }else printf("Guten Tag Frau XY\n");
}
int anrede3(int parameter){
    if (parameter == 0){
        printf("Guten Tag Herr XY\n");
    }else if (parameter == 1){
        printf("Guten Tag Frau XY\n");
    }else printf("Error!\n");
}
int anrede4(int parameter) {
    if (parameter == 0) {
        printf("Guten Tag Herr XY\n");
    } else if (parameter == 1) {
        printf("Guten Tag Frau XY\n");
    } else return 1;
}
int main() {
    anrede1();
    anrede2(4);
    anrede2(0);
    anrede3(0);
    anrede3(1);
    anrede3(2);
    anrede4(0);
    anrede4(1);
    char str9 = anrede4(6);

    if (str9 == 1) {
        printf("Error!");
    }


    return 0;
}