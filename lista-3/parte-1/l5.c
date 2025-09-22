#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

void raizesEq2Grau(double a,double b,double c,double *x1,double *x2){
    double delta = b*b - 4*a*c;
    if(delta<0){
        printf("RAIZES IMAGINARIAS\n");
        exit(0);
    } else if (delta==0){
        *x1 = -b/(2*a);
        *x2 = -b/(2*a);
    } else {
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
    }
}
int main(){
    double a,b,c,x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
        return 0;
    }
    raizesEq2Grau(a,b,c,&x1,&x2);
    if(x1==x2){
        if(x1==0) x1 = x1 * (-1);
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n",x1);
    } else {
        printf("RAIZES DISTINTAS\n");
        if(x1<x2){
            printf("X1 = %.2lf\n",x1);
            printf("X2 = %.2lf\n",x2);
        } else {
            printf("X1 = %.2lf\n",x2);
            printf("X2 = %.2lf\n",x1);
        }
    }
    return 0;
}