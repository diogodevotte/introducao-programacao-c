#include <stdio.h>

int main(){
    double x,soma,exp,deno,div;
    int n,i,j;

    scanf("%lf",&x);
    scanf("%d",&n);
    soma = 1 + x;
    exp = x;
    deno = 1;

    for(i=2;i<=n;i++){
        exp = exp * x;
        deno = deno * i;
        div = exp/deno;
        soma = soma + div;
    }

    printf("e^%.2lf = %.6lf\n",x,soma);

    return 0;
}