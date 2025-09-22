#include<stdio.h>
 
int main(){
float f,c,pol,ml;
scanf("%f/n",&f);
scanf("%f/n",&pol);
c = (5*(f-32))/9;
ml = pol*25.4;
printf("O VALOR EM CELSIUS = %.2f\n", c);
printf("A QUANTIDADE DE CHUVA E = %.2f\n", ml);
    return 0;
}