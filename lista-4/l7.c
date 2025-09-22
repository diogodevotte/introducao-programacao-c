#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    double a,b,c,d;
}p4d;

p4d le_pts(void){
    p4d P;
    scanf("%lf %lf %lf %lf",&P.a,&P.b,&P.c,&P.d);
    return P;
}

void calc_dist(p4d *p,int n){
    int i,j;
    double dist;

    for(i=0;i<(n-1);i++){
        dist = sqrt(pow(p[i].a - p[i+1].a,2)+pow(p[i].b - p[i+1].b,2)+pow(p[i].c - p[i+1].c,2)+pow(p[i].d - p[i+1].d,2));
        printf("%.2lf\n",dist);
    }
}

int main(){
    int n,i;
    p4d *pts=NULL;
    scanf("%d",&n);
    pts = (p4d*)malloc(n*sizeof(p4d));
    for(i=0;i<n;i++){
        pts[i] = le_pts();
    }
    calc_dist(pts,n);
    free(pts);
    return 0;
}