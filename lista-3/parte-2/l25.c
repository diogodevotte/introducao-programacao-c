#include <stdio.h>
#include <string.h>
void limpa_str(char *string){
    int i;
    for(i=0;string[i]!=0;i++){
        if(string[i]==33 ||string[i]==46 ||string[i]==44 ||string[i]==40 ||string[i]==41 ||string[i]==63 ||string[i]==91 ||string[i]==93 ||string[i]==123 ||string[i]==125){
            string[i]=32;
        }
    }
    string[i]=32;
}
int acha_plv(char *str,char *plv,int i){
    int j=0;
    while(str[i]==32){
        i++;
    }
    while(str[i]!=32){
        if(str[i]==0){
            i = -1;
            break;
        }
        plv[j] = str[i];
        j++; i++;
    }
    return i;
}
int main(){
    int i=0,j,n,freq;
    char string[2050]={};
    scanf("%[^\n]%*c",string);
    limpa_str(string);
    while(1){
        freq=0,j=0;
        char palavra[500]={};
        i = acha_plv(string,palavra,i);
        if(i==-1) break;
        while(1){
            char palavra2[500]={};
            j = acha_plv(string,palavra2,j);
            if(j==-1) break;
            n = strcmp(palavra,palavra2);
            if(n==0){
                freq++;
            }
        }
        printf("(%s)%d\n",palavra,freq);
    }
    return 0;
}