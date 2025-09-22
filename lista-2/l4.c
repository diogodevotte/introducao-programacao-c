#include<stdio.h>
 
int main (){
    int i,n;
    double temp, temp2;
 
    scanf("%d",&n);
    float vetor[n];
    float vetor2[n];
 
    for(i=0;i<n;i++){
        scanf("%lf",&temp);
        vetor[i] = temp;
        temp2 = (5*(temp - 32))/9;
        vetor2[i] = temp2;
    }
 
    for(i=0;i<n;i++){
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",vetor[i],vetor2[i]);
    }
 
    return 0;
}