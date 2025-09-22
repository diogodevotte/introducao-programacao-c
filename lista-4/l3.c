#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char pais[32];
    char trad[32];
} Trad;

int main(){
    int i,cont;
    char pais[32];
    Trad P[24]={{"brasil","Feliz Natal!"},
            {"alemanha","Frohliche Weihnachten!"},
            {"austria","Frohe Weihnacht!"},
            {"coreia","Chuk Sung Tan!"},
            {"espanha","Feliz Navidad!"},
            {"grecia","Kala Christougena!"},
            {"estados-unidos","Merry Christmas!"},
            {"inglaterra","Merry Christmas!"},
            {"australia","Merry Christmas!"},
            {"portugal","Feliz Natal!"},
            {"suecia","God Jul!"},
            {"turquia","Mutlu Noeller"},
            {"argentina","Feliz Navidad!"},
            {"chile","Feliz Navidad!"},
            {"mexico","Feliz Navidad!"},
            {"antardida","Merry Christmas!"},
            {"canada","Merry Christmas!"},
            {"irlanda","Nollaig Shona Dhuit!"},
            {"belgica","Zalig Kerstfeest!"},
            {"italia","Buon Natale!"},
            {"libia","Buon Natale!"},
            {"siria","Milad Mubarak!"},
            {"marrocos","Milad Mubarak!"},
            {"japao","Merii Kurisumasu!"}
    };

    while(scanf("%s%*c",pais)!=EOF){
        for(i=0;i<24;i++){
            cont = strcmp(pais,P[i].pais);
            if(cont==0){
                printf("%s\n",P[i].trad);
                break;
            } else if(i==23){
                printf("-- NOT FOUND --\n");
            }
        }
    }

    return 0;
}