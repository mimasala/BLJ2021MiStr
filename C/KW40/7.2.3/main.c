#include <stdio.h>
int radius(int square_side);   //function prototype with return type int
double pi = 3.1415;
int main()
{
    int radius,pi;

    printf("Enter the side of square :");
    scanf("%d",&pi);
    radius = radius(pi);    //function call
    printf("Area of Square = %d",radius);
    return 0;
}
int radius(int square_side)
{
    int square_area;
    square_area = pi * square_side;
    return square_area;
}