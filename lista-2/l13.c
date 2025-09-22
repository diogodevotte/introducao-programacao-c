#include<stdio.h>
 
int main(){
    int num,somai = 0 ,somap = 0;
    double mediai,mediap,numi=0,nump=0;
   
    scanf("%d ",&num);
   
    while(num != 0){
        if(num % 2 == 0){
            somap = somap + num;
            nump++;
        } else if(num != 0){
            somai = somai + num;
            numi++;
        }
        scanf("%d",&num);
    }
    mediai = somai / numi;
    mediap = somap / nump;
    
    if(nump==0){
        mediap = 0;
    }
    if(numi==0){
        mediai = 0;
    }
 
    printf("MEDIA PAR: %lf\n",mediap);
    printf("MEDIA IMPAR: %lf\n",mediai);
    return 0;
}