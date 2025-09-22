#include <stdio.h>

int main (){
    int v,num,res,leds;
    scanf("%d",&v);
    while(v--){
        scanf("%d",&num);
        leds=0;
        if(num==0){
            leds = (sizeof(num) - 1)*6;
        }
        while(num){
            res = num%10;
            num /= 10;

            if(res==1){
                leds += 2;
            }
            if(res==2 || res==3 || res==5){
                leds += 5;
            }
            if(res==4){
                leds += 4;
            }
            if(res==6 || res==9 || res==0){
                leds += 6;
            }
            if(res==7){
                leds += 3;
            }
            if(res==8){
                leds+=7;
            }
        }
        printf("%d leds\n",leds);
    }
    return 0;
}