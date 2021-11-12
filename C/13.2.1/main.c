#include <stdio.h>


void calcPoints(double a, double b, double xmin, double *xcon, double *ycon);

int main() {

    double a;
    double b;
    double xmin = 0;
    double xcon[100];
    double ycon[100];


    printf("Bitte die Steigung eingeben:\n");
    scanf("%lf", &a);
    printf("Bitte den Offset eingeben:\n");
    scanf("%lf", &b);
    printf("Bitte den Xmin eingeben:\n");
    scanf("%lf", &xmin);


    calcPoints(a, b, xmin, xcon, ycon);

    for (int i = 1; i <= 20; ++i) {
        printf("Zahl %d: x:%lf y:%lf\n", i, xcon[i], ycon[i]);
    }

    return 0;
}

void calcPoints(double a, double b, double xmin, double *xcon, double *ycon){

    for (int i = 1; i  <= 20 ; i = i+1) {
        ycon[i] = a*xmin + b;
        xcon[i] = xmin;
        xmin += 1;
    }
}
