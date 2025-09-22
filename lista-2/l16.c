#include <stdio.h>
#include <math.h>
 
int main(){
    double a,b,c,delta,deltar,x,x1,x2;
 
    scanf("%lf %lf %lf",&a,&b,&c);
 
    delta = b*b - 4*a*c;
    deltar = sqrt(b*b - 4*a*c);
 
    if(a != 0 && b!= 0 && c!=0 || a != 0){
    if(delta<0){
        printf("RAIZES IMAGINARIAS\n");
    } else if(delta==0){
        printf("RAIZ UNICA\n");
        x = -b/(2*a);
        printf("X1 = %.2lf\n",x);
    } else if(delta>0){
        printf("RAIZES DISTINTAS\n");
        x1 = (-b + deltar)/(2*a); 
        x2 = (-b - deltar)/(2*a); 
        if(x1<x2){
            printf("X1 = %.2lf\n",x1);
            printf("X2 = %.2lf\n",x2);
        } else {
            printf("X1 = %.2lf\n",x2);
            printf("X2 = %.2lf\n",x1);
        }
    }  
    } 
    return 0;
}