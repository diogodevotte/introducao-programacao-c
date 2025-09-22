#include<stdio.h>
#include<math.h>
 
int main(){
    double l1,l2,l3,t,b,a;
    scanf("%lf/n",&l1);
    scanf("%lf/n",&l2);
    scanf("%lf",&l3);
    t = (l1+l2+l3)/2;
    b = t*(t-l1)*(t-l2)*(t-l3);
    a = sqrt(b);
    printf("A AREA DO TRIANGULO E = %.2lf\n",a);
    return 0;
}