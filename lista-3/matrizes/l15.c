#include <stdio.h>
#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1

void limpa_str(char *str_total,char *str_sep){
    int i,j;
    for(i=0;str_total[i]!=0;i++){
        for(j=0;str_sep[j]!=0;j++){
            if(str_total[i]==str_sep[j]){
                str_total[i] = '\n';
            }
        }
    }
    str_total[i]='\n';
}

int str_split(char *str_total, char mt_str[][MAX_WORD_LEN], char *str_sep,int *vet){
    int i=0,ln=0,j,k=0;

    limpa_str(str_total,str_sep);

    while(1){
        while(str_total[i]=='\n'){
            i++;
        }

        if(str_total[i]==0) break;

        j=0; 
        for(i;str_total[i]!='\n';i++){
            mt_str[ln][j] = str_total[i];
            j++;
        }
        vet[k] = j;
        ln++; k++;
    }
    return ln;
}


int main(){
    char mt_str[MAX_WORDS][MAX_WORD_LEN]={},str_total[13000]={},str_sep[50]={};
    int vet[200]={},ln,i,maior,rep=1;

    scanf("%[^\n]%*c",str_total);
    scanf("%[^\n]%*c",str_sep);
    ln = str_split(str_total,mt_str,str_sep,vet);

    for(i=0;i<ln;i++){
        printf("(%d)",vet[i]);
        printf("%s\n",mt_str[i]);
    }

    for(i=0;i<ln;i++){
        if(i==0){
            maior = vet[i];
        } else if(vet[i]>maior){
            maior = vet[i];
            rep = 1;
        } else if(vet[i]==maior){
            rep++;
        }
    }
    printf("%d\n",rep);

    return 0;
}