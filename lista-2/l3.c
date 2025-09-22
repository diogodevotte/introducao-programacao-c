#include<stdio.h>
 
int main(){
    char rci;
    float m2,total;
    int num;
 
    scanf("%d %f %c",&num,&m2,&rci);
    printf("CONTA = %d\n",num);
 
    switch (rci){
        case 'R':
        total = 5 + 0.05*m2;
        printf("VALOR DA CONTA = %.2f\n",total);
        break;
        case 'C':
            if(m2 <= 80){
                total = 500;
                printf("VALOR DA CONTA = %.2f\n",total);
            } else {
                total = 500 + 0.25 * (m2-80);
                printf("VALOR DA CONTA = %.2f\n",total);    
            }
        break;
        case 'I':
        if(m2 <= 100){
                total = 800;
                printf("VALOR DA CONTA = %.2f\n",total);
            } else {
                total = 800 + 0.04 * (m2-100);
                printf("VALOR DA CONTA = %.2f\n",total);    
            }
        break;
    }
    return 0;
}