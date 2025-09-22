#include<stdio.h>
 
int main(){
    int valor,v100,v50,v10,v1;
    scanf("%d",&valor);
    v100 = valor/100;
    v50 = (valor%100)/50;
    v10 = ((valor%100)%50)/10;
    v1 = (((valor%100)%50)%10);
    printf("NOTAS DE 100 = %d\n",v100);
    printf("NOTAS DE 50 = %d\n",v50);
    printf("NOTAS DE 10 = %d\n",v10);
    printf("MOEDAS DE 1 = %d\n",v1);
    return 0;
}