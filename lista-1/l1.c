#include<stdio.h>
 
int main(){
    float salario,kw,v1,v2,v3;
    scanf("%f\n",&salario);
    scanf("%f",&kw);
    v1 = (0.7*salario)/100;
    v2 = v1*kw;
    v3 = v2*0.9;
    printf("Custo por kW: R$ %.2f\n",v1);
    printf("Custo do consumo: R$ %.2f\n",v2);
    printf("Custo com desconto: R$ %.2f\n",v3);
    return 0;
}