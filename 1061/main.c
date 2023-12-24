#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int ds,de,hs,he,ms,me,ss,se,td,th,tm,ts,total1,total2,temp;
//    scanf("%d",&ds);
//    scanf("%d  %d  %d",&hs,&ms,&ss);
//    scanf("%*s %d",&de);
//    scanf("%d  %d  %d",&he,&me,&se);
//    total1= ss+(ms*60)+(hs*120)+(ds*24*120);
//    total2= se+(me*60)+(he*120)+(de*24*120);
//    temp=total2-total1;
//    td=temp/86400;
//    temp=temp%86400;
//    th=temp/3600;
//    temp=temp%3600;
//    tm=temp/60;
//    temp=temp%60;
//    ts=temp;
//    printf("%d dia(s)\n", td);
//    printf("%d hora(s)\n", th);
//    printf("%d minuto(s)\n", tm);
//    printf("%d segundo(s)\n", ts );
    int N, slot1, slot2, d1, d2, h1, h2, m1, m2, s1, s2, l, i, j, k;
    scanf("%*s %d ", &d1);
    scanf("%d %*s ", &h1);
    scanf("%d %*s", &m1);
    scanf("%d ", &s1);
    scanf("%*s %d ", &d2);
    scanf("%d %*s", &h2);
    scanf("%d %*s", &m2);
    scanf("%d", &s2);
    slot1 = s1 + (m1*60) + (h1*(60*60)) + (d1*(24*60*60));
    slot2 = s2 + (m2*60) + (h2*(60*60)) + (d2*(24*60*60));
    N = slot2 - slot1;
    l = N / 86400;
    N = N % 86400;
    i = N / 3600;
    N = N % 3600;
    j = N / 60;
    k = N % 60;
    printf("%d dia(s)\n", l);
    printf("%d hora(s)\n", i);
    printf("%d minuto(s)\n", j);
    printf("%d segundo(s)\n", k );



    return 0;
}
