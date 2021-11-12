#include <stdio.h>


void calcPoints(double a, double b, double xmin, double *xycon);

int main() {

    double a;
    double b;
    double xmin = 0;
    double xycon[100][100];


    printf("Bitte die Steigung eingeben:\n");
    scanf("%lf", &a);
    printf("Bitte den Offset eingeben:\n");
    scanf("%lf", &b);
    printf("Bitte den Xmin eingeben:\n");
    scanf("%lf", &xmin);


    calcPoints(a, b, xmin, xycon);

    for (int i = 1; i <= 20; ++i) {
        printf("Zahl %d: x:%lf y:%lf\n", i, xycon[i]);
    }

    return 0;
}

void calcPoints(double a, double b, double xmin, double *xycon){

    for (int i = 1; i  <= 20 ; i = i+1) {
        xycon[0][i] = a*xmin + b;
        xycon[i][0] = xmin;
        xmin += 1;
    }
}
