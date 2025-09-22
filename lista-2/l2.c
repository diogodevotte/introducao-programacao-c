#include<stdio.h>
#include<math.h>
 
int main(){
    int n1,n2,n3,num;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    scanf("%d",&n3);
    if(n1<=9 && n2<=9 && n3<=9){
        num = n1*100+n2*10+n3;
        printf("%d, %.0lf\n",num,pow(num,2));
    } else {
        printf("DIGITO INVALIDO\n");
    }
    return 0;
}