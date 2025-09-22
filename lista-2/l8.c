# include <stdio.h>
 
int main () {
double nf,mp,ml,nt;
int mat,freq;
double n1, n2, n3, n4, n5, n6, n7, n8; 
double l1,l2,l3,l4,l5, tabf;
scanf("%d",&mat);
while(mat != -1){
scanf ("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&l1,&l2,&l3,&l4,&l5,&tabf,&freq);
mp = (n1+n2+n3+n4+n5+n6+n7+n8)/8;
ml = (l1+l2+l3+l4+l5)/5;
nf = 0.7*mp + 0.15*ml + 0.15*tabf;
if (nf>=6 && freq>=96){
    printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n",mat,nf);
} else if(nf<6 && freq>=96) {
    printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n",mat,nf);
} else if(nf>=6 && freq<96) {
    printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n",mat,nf);
} else if(nf<6 && freq<96){
    printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n",mat,nf);
}
scanf("%d",&mat);
}
}