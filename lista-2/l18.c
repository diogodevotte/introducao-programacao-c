#include <stdio.h>
 
int main(){
    int num,ano,dia,mes,n2;
    float n1;
 
    scanf("%d",&num);
 
    dia = num / 1000000;
    n1 = num / 10000.0;
    n2 = n1;
    ano = (n1 - n2)*10000;
    mes = (num - (dia*1000000 + ano)) / 10000;
    
    switch(mes){
        case 1:
            if(dia>=1 && dia<=31){
                printf("%d de janeiro de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 2:
            if(dia>=1 && dia<=28){
                printf("%d de fevereiro de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;      
        case 3:
            if(dia>=1 && dia<=31){
                printf("%d de marco de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 4:
            if(dia>=1 && dia<=31){
                printf("%d de abril de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 5:
            if(dia>=1 && dia<=31){
                printf("%d de maio de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 6:
            if(dia>=1 && dia<=30){
                printf("%d de junho de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 7:
            if(dia>=1 && dia<=31){
                printf("%d de julho de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 8:
            if(dia>=1 && dia<=31){
                printf("%d de agosto de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 9:
            if(dia>=1 && dia<=30){
                printf("%d de setembro de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 10:
            if(dia>=1 && dia<=31){
                printf("%d de outubro de %d\n",dia,ano);
            } else {break;
                printf("Data invalida!\n");
            }
            break;
        case 11:
            if(dia>=1 && dia<=30){
                printf("%d de novembro de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        case 12:
            if(dia>=1 && dia<=31){
                printf("%d de dezembro de %d\n",dia,ano);
            } else {
                printf("Data invalida!\n");
            }
            break;
        default:
            printf("Data invalida!\n");
            break;
    }
 
    return 0;
}