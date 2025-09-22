#include<stdio.h>
 
int main(){
    float h,a,vol,raiz=1.732050807568877;
    scanf("%f %f",&h,&a);
    vol = (a*a*raiz*h)/2;
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n",vol);
    return 0;
}