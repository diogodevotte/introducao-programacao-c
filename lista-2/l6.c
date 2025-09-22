#include <stdio.h>
 
int main(){
    float nota;
    char conc;
 
    scanf("%f",&nota);
    
    if(nota >= 9 && nota <= 10){
        conc = 'A';
        printf("NOTA = %0.1f CONCEITO = %c\n",nota,conc);
    } else if(nota >= 7.5 && nota < 9){
        conc = 'B';
        printf("NOTA = %0.1f CONCEITO = %c\n",nota,conc);
    } else if(nota >= 6 && nota < 7.5){
        conc = 'C';
        printf("NOTA = %0.1f CONCEITO = %c\n",nota,conc);
    } else if(nota >= 0 && nota < 6){
        conc = 'D';
        printf("NOTA = %0.1f CONCEITO = %c\n",nota,conc);
    }
 
    return 0;
}