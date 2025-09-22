#include <stdio.h>
#include <string.h>

int main (){
    int l,i,k,vogais,letras,consoantes,num;
    char linha[10000];
    
    scanf("%d\n",&num);

    for(k=0;k<num;k++){
        vogais=0,letras=0,consoantes=0;

        fgets(linha,sizeof(linha),stdin);

        for(i=0;linha[i] != '\0';i++){
            if(linha[i]>=97 && linha[i]<=122 || linha[i]>=65 && linha[i]<=90) letras++;
            if(linha[i]=='a' || linha[i]=='A' || linha[i]=='e' || linha[i]=='E' || linha[i]=='i' || linha[i]=='I' || linha[i]=='o' || linha[i]=='O' || linha[i]=='u' || linha[i]=='U') vogais++;
        }
        consoantes = letras - vogais;

        printf("Letras = %d\n",letras);
        printf("Vogais = %d\n",vogais);
        printf("Consoantes = %d\n",consoantes);

    }
    return 0;
}