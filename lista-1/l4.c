#include<stdio.h>
 
int main(){
    float a,b,c,result;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f",&c);
    result = (b*b)-(4*a*c);
    printf("O VALOR DE DELTA E = %.2f\n",result);
 
    return 0;