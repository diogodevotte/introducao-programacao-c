#include<stdio.h>
 
int main(){
    int num,bin1,bin2,bin3,bin4,bin5,bin6,bin7,bin8;
    scanf("%d",&num);
        if(num>=0 && num<=255){
            bin8 = num % 2;
            bin7 = (num/2)%2;
            bin6 = ((num/2)/2)%2;
            bin5 = (((num/2)/2)/2)%2;
            bin4 = ((((num/2)/2)/2)/2)%2;
            bin3 = (((((num/2)/2)/2)/2)/2)%2;
            bin2 = ((((((num/2)/2)/2)/2)/2)/2)%2;
            bin1 = (((((((num/2)/2)/2)/2)/2)/2)/2)%2;
            printf("%d%d%d%d%d%d%d%d\n",bin1,bin2,bin3,bin4,bin5,bin6,bin7,bin8);
        } else{
            printf("Numero invalido!\n");
        }
    return 0;
}