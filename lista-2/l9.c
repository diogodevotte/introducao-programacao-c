#include<stdio.h>
 
int main (){
    int A,B, anos = 0;
    scanf("%d",&A);
    scanf("%d",&B);
    do{
        A = A * 1.03;
        B = B * 1.015;
        anos = anos + 1;
    } while(A < B);
    printf("ANOS = %d\n",anos);
    return 0;
}