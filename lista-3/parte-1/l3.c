#include <stdio.h>
void separaDigitos(int num, int *n1,int *n2, int *n3){
    *n3 = num/100;
    *n2 = (num%100)/10;
    *n1 = num%10;
}
int main(){
    int num,n1,n2,n3;
    scanf("%d",&num);
    separaDigitos(num,&n1,&n2,&n3);
    printf("%d%d%d\n",n1,n2,n3);
    return 0;
}