#include<stdio.h>
 
int main(){
    int dig,num1,num2,num3;
    scanf("%d",&dig);
    num3 = dig % 10;
    num2 = (dig/10) % 10;
    num1 = (dig/100);
    printf("%d%d%d\n",num3,num2,num1);
    return 0;
}