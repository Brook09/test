#include <stdio.h>

int main(){

    int a=0,m1000=0,m500=0,m100=0,m50=0,m20=0,m10=0,m1=0;
    scanf("%d",&a);

    m1000 = a/1000;
    m500 = (a-(m1000*1000))/500;
    m100 = (a-(m1000*1000)-(m500*500))/100;
    m50 =  (a-(m1000*1000)-(m500*500)-(m100*100))/50;
    m20 =  (a-(m1000*1000)-(m500*500)-(m100*100)-(m50*50))/20;
    m10 =  (a-(m1000*1000)-(m500*500)-(m100*100)-(m50*50)-(m20*20))/10;
    m1 =  (a-(m1000*1000)-(m500*500)-(m100*100)-(m50*50)-(m20*20)-(m10*10))/1;

    printf("%d %d %d %d %d %d %d",m1000,m500,m100,m50,m20,m10,m1);

    return 0;
}