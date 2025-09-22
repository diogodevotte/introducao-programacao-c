#include <stdio.h>
double raiz(double n,double p){
    double x,r=1,raiz;
    do{
        r = (r + (n/r))/2;
        x = n - r*r;
        if(x<0){
            x = x*(-1);
        }
        printf("r: %.9lf, err: %.9lf\n",r,x);
    }while(x>p);
    return r;
}
int main(){
    double n,e;
    scanf("%lf",&n);
    scanf("%lf",&e);
    raiz(n,e);
    return 0;
}
double absoluto( double n ){
    int num = n;
    return num;
}