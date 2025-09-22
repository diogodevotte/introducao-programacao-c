#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    double a,b,c,d,norma;
} p4d;

p4d le_pontos(void){
    p4d P;
    scanf("%lf %lf %lf %lf",&P.a,&P.b,&P.c,&P.d);
    P.norma = sqrt(pow((P.a),2)+pow((P.b),2)+pow((P.c),2)+pow((P.d),2));
    return P;
}

int main(){
    int rep,i,j,k,*vet=NULL,im=0;
    p4d *pts=NULL;

    scanf("%d",&rep);
    pts = (p4d*)malloc(rep*sizeof(p4d));

    for(i=0;i<rep;i++){
        pts[i] = le_pontos();
    }

    for(k=0;k<rep;k++){
        for(i=0;i<rep;i++){
            if(pts[i].norma == -1) continue;
            if(pts[i].norma<pts[im].norma){
                im = i;
            }
        }
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n",pts[im].a,pts[im].b,pts[im].c,pts[im].d,pts[im].norma);
        pts[im].norma = -1;
        j=0;
        while(pts[j].norma==-1){
            if(i==(rep-1)) break;
            j++;
        }
        im = j;
    }
    free(pts);

    return 0;
}