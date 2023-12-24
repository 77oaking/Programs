#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int a,b;
//    scanf("%d%d",&a,&b);
//    if(a==1){
//        printf("Total: R$ %.2lf\n",b*4.00);
//    }else if(a==2){
//        printf("Total: R$ %.2lf\n",b*4.50);
//    }else if(a==3){
//        printf("Total: R$ %.2f\n",b*5.00);
//    }else if(a==4){
//        printf("Total: R$ %.2lf\n",b*2.00);
//    }else if(a==5){
//        printf("Total: R$ %.2lf\n",b*1.50);
//    }
    int x,z;
    double y;
    scanf("%d%d",&x,&z);
    if(x==1){
        y=4.00;
    }else if(x==2){
        y=4.50;
    }else if(x==3){
        y=5.00;
    }else if(x==4){
        y=2.00;
    }else if(x==5){
        y=1.50;
    }
    printf("Total: R$ %.2lf \n",y*z);

    return 0;
}
