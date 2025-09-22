#include <stdio.h>

typedef struct{
    int nume,deno;
} tRacional;

int MDC(int x, int y){
    int i,res=1,maior;
    
    if(x>y) maior = x;
    if(y>x) maior = y;
    if(x==y) maior = y;
    if(maior==1) return 1;

    for(i=2;i<=maior;i++){
        while(x%i==0 && y%i==0){
            x = x/i;
            y = y/i;
            res *= i;
        }
        while(x%i==0){
            x = x/i;
            res *= i;
        }
        while(y%i==0){
            y = y/i;
            res *= i;
        }
        if(x==1 && y==1 || x==1 && y==-1 || x==-1 && y==1 || x==-1 && y==-1) break;
    }
    return res;
}

tRacional racional(int a, int b){
    tRacional R;
    R.nume = a;
    R.deno = b;
    return R;
}

tRacional negativo(tRacional r1,tRacional r2){
    tRacional res;
    int mdc,m1,m2;

    mdc = MDC(r1.deno,r2.deno);
    m1 = mdc/r1.deno;
    m2 = mdc/r2.deno;

    r1.nume *= m1;
    r1.deno *= m1;
    r2.nume *= m2;
    r2.deno *= m2;

    res.nume = r1.nume - r2.nume;
    res.deno = r1.deno;

    return res;
}

tRacional soma(tRacional r1, tRacional r2){
    tRacional res;
    int mdc,m1,m2;

    mdc = MDC(r1.deno,r2.deno);
    m1 = mdc/r1.deno;
    m2 = mdc/r2.deno;

    r1.nume *= m1;
    r1.deno *= m1;
    r2.nume *= m2;
    r2.deno *= m2;

    res.nume = r1.nume + r2.nume;
    res.deno = r1.deno;

    return res;
}

tRacional mult(tRacional r1, tRacional r2){
    tRacional res;

    res.nume = r1.nume * r2.nume;
    res.deno = r1.deno * r2.deno;

    return res;
}

tRacional div(tRacional r1, tRacional r2){
    tRacional res;
    int t;

    t = r2.deno;
    r2.deno = r2.nume;
    r2.nume = t;

    res = mult(r1,r2);

    return res;
}

void reduzFracao(tRacional * r){
    int menor,i,nume,deno,negn=0,negd=0;

    nume = r->nume;
    deno = r->deno;

    if(nume<0){
        nume *= -1;
        negn=1;
    }
    if(deno<0){
        deno *= -1;
        negd=1;
    }

    if(nume < deno) menor = nume;
    if(nume > deno) menor = deno;
    if(nume == deno) menor = nume;

    for(i=2;i<=menor;i++){
        while(nume%i==0 && deno%i==0){
            nume = nume/i;
            deno = deno/i;
        }
    }

    if(negn==1){
        nume *= -1;
    }
    if(negd==1){
        deno *= -1;
    }

    r->nume = nume;
    r->deno = deno;
}





int main(){
    int a,b,c,d;
    char op;
    tRacional r1,r2,res;

    while(scanf("%d %d %c %d %d",&a,&b,&op,&c,&d)!=EOF){
        r1 = racional(a,b);
        r2 = racional(c,d);

        if(op=='+'){
            res = soma(r1,r2);
        } else if(op=='-'){
            res = negativo(r1,r2);
        } else if(op=='*'){
            res = mult(r1,r2);
        } else if(op=='/'){
            res = div(r1,r2);
        }

        reduzFracao(&res);
        printf("%d %d\n",res.nume,res.deno);
    }
    
    return 0;
}