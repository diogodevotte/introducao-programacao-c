#include<stdio.h>
 
int main(){
    double m,a,t,v,s,W;
    scanf("%lf\n",&m);
    scanf("%lf\n",&a);
    scanf("%lf",&t);
    v = a*3.6*t;
    s = (a*t*t)/2;
    W = (m*1000*a*t*a*t)/2;
    printf("VELOCIDADE = %.2lf\n",v);
    printf("ESPACO PERCORRIDO = %.2lf\n",s);
    printf("TRABALHO REALIZADO = %.2lf\n",W);
    return 0;
}