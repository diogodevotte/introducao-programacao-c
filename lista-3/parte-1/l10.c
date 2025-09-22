#include <stdio.h>
double compute_pi(int n){
    double pi=2,k,contn=1,contd=0,nume=2,deno=3;
    while(n--){
        k = nume/deno;
        pi = pi * k;
        contn++;contd++;
        if(contn==2){
            nume += 2;
            contn = 0;
        }
        if(contd==2){
            deno += 2;
            contd = 0;
        }
    }
    return pi*2;
}
int main (){
    int n;
    double res;
    scanf("%d",&n);
    res = compute_pi(n-1);
    printf("%.12lf\n",res);
    return 0;
}