#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,a,b,h,m;
    scanf("%d%d%d%d",&x,&a,&y,&b);
    if(x==y&&a==b){
        h=24;
        m=b-a;
    }
    else if(x!=y){
        if(x<y){h=y-x;}
        if(x>y){h=(y+24)-x;}
        m=(60-a)+(60-b);
        if(m>60){
            h--;
            m=m-60;
        }

    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",h,m);


 int start_h,end_h,start_m,end_m,duration_h,duration_m;
    scanf("%d %d %d %d",&start_h,&start_m,&end_h,&end_m);
    if (start_h == end_h && start_m == end_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    duration_h = end_h - start_h;

    if (duration_h < 0){
        duration_h = 24 + (end_h - start_h);
    }

     duration_m = end_m - start_m;
     if (duration_m < 0){
        duration_m = 60 + (end_m - start_m);
        duration_h--;
      }
        if (start_h == end_h && start_m == end_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_h, duration_m);

    return 0;
}
