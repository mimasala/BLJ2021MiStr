#include <stdio.h>

int main() {

    int a;
    int *pt;
    a = 10;
    pt = &a;

    //prints out the integer a
    printf("a : %d\n", a);
    //prints out the pointer
    printf("pt : %p\n", pt);
    //prints out the value of the pointer
    printf("*pt : %d\n", *pt);
    //prints the address of the pointer
    printf("&pt : %p\n", &pt);
    //prints the address of "int a"
    printf("&a : %p\n", &a);
    //prints out the address of the pointer
    printf("&*pt: %p\n", &*pt);

    return 0;
}
