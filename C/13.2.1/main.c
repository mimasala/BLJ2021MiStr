#include <stdio.h>
#include <stdlib.h>

double calcPoints(double a, double b, double xmin, double xmax, double *xcon[100], double *ycon[100]);

int main() {

    double a;
    double b;
    double xmin;
    double xmax;
    double xcon[100];
    double ycon[100];
    int p_xcon;
    int p_ycon;

    printf("Bitte die Steigung eingeben:\n");
    scanf("%lf", &a);
    printf("Bitte den Offset eingeben:\n");
    scanf("%lf", &b);
    printf("Bitte den Xmin eingeben:\n");
    scanf("%lf", &xmin);
    printf("Bitte den Xmax eingeben:\n");
    scanf("%lf", &xmax);

    calcPoints(a, b, xmin, xmax, &p_xcon, &p_ycon);
   
    for (int i = 0; i <= 100; ++i) {
        printf("Zahl %d: %lf", i, xcon[i]);
    }

    return 0;
}

double calcPoints(double a, double b, double xmin, double xmax, double *xcon[100], double *ycon[100]){

    for (int i = 0; i  < 100 ; i = i+1) {
        if (xmin <= xmax){
            *xcon[i] = a*xmin + b;
            *ycon[i] = xmin;
            xmin = xmin + 1;
        }


    }


}
