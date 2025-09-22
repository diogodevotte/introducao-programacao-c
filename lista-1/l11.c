#include<stdio.h>
 
int main(){
    float fab,imp,dis,total;
    scanf("%f",&fab);
    scanf("%f",&dis);
    scanf("%f",&imp);
    total = fab+(fab*(dis/100))+(fab*(imp/100));
    printf("O VALOR DO CARRO E = %.2f\n",total);
    return 0;
}