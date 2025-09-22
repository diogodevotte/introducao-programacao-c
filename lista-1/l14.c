#include<stdio.h>
 
int main(){
    int dig,num1,num2,num3,num4;
    scanf("%d",&dig);
    num3 = dig % 10;
    num2 = (dig/10) % 10;
    num1 = ((dig/10)/10);
    num4 = (num1+num2*3 + num3*5)%7;
    printf("O NOVO NUMERO E = %d%d\n",dig,num4);
    return 0;
}