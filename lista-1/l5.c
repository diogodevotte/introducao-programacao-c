#include<stdio.h>
 
int main(){
    float a,b,c,d,det;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f\n",&c);
    scanf("%f",&d);
    det = (a*d)-(b*c);
    printf("O VALOR DO DETERMINANTE E = %.2f\n",det);
    return 0;
}