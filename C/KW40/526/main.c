#include <stdio.h>

int main()
{

    unsigned char ip1 = 128;
    unsigned char ip2 = 230;
    unsigned char ip3 = 130;
    unsigned char ip4 = 10;
    unsigned char sf = 28;


    unsigned char bytes[4];
    bytes[0] = (ip1 >> 24) & 0xFF;
    bytes[1] = (ip2 >> 16) & 0xFF;
    bytes[2] = (ip3 >> 8) & 0xFF;
    bytes[3] = (ip4 >> 24) & 0xFF;
    printf("%d.%d.%d.%d\n", bytes[3], bytes[2], bytes[1], bytes[0]);






    return 0;
}