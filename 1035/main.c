#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int A,B,C,D;
//    scanf("%d%d%d%d",&A,&B,&C,&D);
//    if(B>C&&D>A){
//        if(C+D>A+B)
//                if(C>0&&D>0)
//                             if (A%2==0)
//                                printf("Valores aceitos\n");
//
//
//    }
//    else printf("Valores nao aceitos\n");

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((b > c) && (d > a) && (c + d > a + b) && c > 0 && (a % 2 == 0))
    printf("Valores aceitos\n");
    else
    printf("Valores nao aceitos\n");

    return 0;
}
