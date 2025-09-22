#include <stdio.h>
 
int main(){
    int num,n1,n2,n3,n4,n5;
 
    scanf("%d",&num);
 
    if(num>99){
        if(num>99999){
            printf("NUMERO INVALIDO\n");
        } else if(num<99999 && num>99){
            if(num<=999){
                n1 = num/100;
                n3 = (num%100)%10;
                if(n1 == n3){
                    printf("PALINDROMO\n");
                } else {
                    printf("NAO PALINDROMO\n");
                }
            }
            if(num>999 && num<=9999){
                n1 = num/1000;
                n2 = (num%1000)/100;
                n3 = ((num%1000)%100)/10;
                n4 = ((num%1000)%100)%10;
                if(n1==n4 && n2==n3){
                    printf("PALINDROMO\n");
                } else {
                    printf("NAO PALINDROMO\n");
                }
            }
            if(num>9999 && num<=99999){
                n1 = num/10000;
                n2 = (num%10000)/1000;
                n4 = (((num%10000)%1000)%100)/10;
                n5 = (((num%10000)%1000)%100)%10;
                if(n1==n5 && n2==n4){
                    printf("PALINDROMO\n");
                } else {
                    printf("NAO PALINDROMO\n");
                }
            }
        }
    }
 
 
    return 0;
}