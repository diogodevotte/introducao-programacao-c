#include<stdio.h>
 
int main(){
    float a,b,c,d,e,f,x,y;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f\n",&c);
    scanf("%f\n",&d);
    scanf("%f\n",&e);
    scanf("%f",&f);
    y = (d*c - a*f)/(d*b - a*e);
    x = (f - e*y)/d;
    printf("O VALOR DE X E = %.2f\n",x);
    printf("O VALOR DE Y E = %.2f\n",y);
    return 0;
}