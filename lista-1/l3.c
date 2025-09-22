#include<stdio.h>
 
int main(){
float raio,alt,custo,pi=3.14159,areat;
scanf("%f\n",&raio);
scanf("%f",&alt);
areat = (2*(pi*raio*raio))+(2*pi*raio*alt);
custo = areat*100;
printf("O VALOR DO CUSTO E = %.2f\n",custo);
    return 0;
}