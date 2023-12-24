#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,temp;
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        printf("%d",temp%10);
        temp/=10;
    }



    return 0;
}
//    if((500 && -500)||(70&&-70)){
//        printf("%s","Condition is true");
//
//    }else printf("Not true");
//
////    double n;
////    scanf("%lf",&n);
////    while(n>=0.50){
////        n=n-0.50;
////    }
////    printf("%lf",n);
////    system("pause");
