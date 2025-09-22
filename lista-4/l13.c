#include <stdio.h>
#include <math.h>

typedef struct{
    float real,img;
} Complex;

typedef struct{
    Complex x1,x2;
} RaizEqu2;

RaizEqu2 calcula_raiz_equ_2( float a, float b, float c){
    RaizEqu2 eq;
    float delta,raizd;

    delta = b*b - (4*a*c);

    if(delta>=0){
        raizd = sqrt(delta);
        eq.x1.real = (-b + raizd)/(2*a);
        eq.x1.img = 0;
        eq.x2.real = (-b - raizd)/(2*a);
        eq.x2.img = 0;
    } else if(delta<0){
        delta *= (-1);
        raizd = sqrt(delta);
        eq.x1.real = (-b)/(2*a);
        eq.x1.img = (raizd)/(2*a);
        eq.x2.real = (-b)/(2*a);
        eq.x2.img = (-raizd)/(2*a);;
    }
    return eq;
}

void complex_print(Complex c,int i){
    if(c.img==0 && c.real==0){
        printf("x%d = 0.00\n",i);
    } else {
        printf("x%d = ",i);
        if(c.real != 0){
            printf("%.2f",c.real);
        }
        if(c.img != 0){
            if(c.real != 0){
                if(c.img==1) printf("+i");
                if(c.img==-1) printf("-i");
                if(c.img!=1 && c.img!=-1) printf("%+.2fi",c.img);
            } else if(c.real==0){
                if(c.img==1) printf("i");
                if(c.img==-1) printf("-i");
                if(c.img!=1 && c.img!=-1) printf("%.2fi",c.img);
            }
        }
        printf("\n");
    }
}

int main(){
    float a,b,c;
    RaizEqu2 eq;

    scanf("%f %f %f",&a,&b,&c);
    eq = calcula_raiz_equ_2(a,b,c);
    complex_print(eq.x1,1);
    complex_print(eq.x2,2);

    return 0;
}