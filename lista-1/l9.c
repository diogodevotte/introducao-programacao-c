#include<stdio.h>
 
int main(){
    double num,num1,num2,num3;
    int res1,res2,res3;
    scanf("%lf",&num);
    res1 = (num+0.05)*10;
    num1 = res1/10.0;
    res2 = (num+0.005)*100;
    num2 = res2/100.0;
    res3 = (num+0.0005)*1000;
    num3 = res3/1000.0;
    printf("%.6lf\n",num1);
    printf("%.6lf\n",num2);
    printf("%.6lf\n",num3);
    return 0;
}
