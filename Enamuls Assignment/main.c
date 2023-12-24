#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter your Unit amount: ");
    scanf("%d",&n);
    if(n<=0 &&n<=50){
        printf("Your bill is: %.2f",n*3.75);
    }
    if(n>=0 &&n<=75){
        printf("Your bill is: %.2f",n*4.19);
    }else if(n>=75 && n<=200){
        printf("Your bill is: %.2f",(n-75)*5.72+314.25);
    }else if(n>=200 && n<=300){
        printf("Your bill is: %.2f",(n-200)*6+1458.25);
    }else if(n>=300 && n<=400){
        printf("Your bill is: %.2f",(n-300)*6.34+3258.25);
    }else if(n>=400 && n<=600){
        printf("Your bill is: %.2f",(n-400)*9.94+5794.25);
    }else if(n>=600){
        printf("Your bill is: %.2f",(n-600)*9.94+11758.25);
    }

    return 0;
}



//    float n;
//    scanf("%f",&n);
//    if(n>0 && n<=2000){
//        printf("Isento\n");
//    }
//    if (n>2000 && n<=3000){
//        printf("R$ %.2f\n",(n-2000)*8/100);
//    }
//    if (n>3000 && n<=4500){
//        printf("R$ %.2f\n",(n-3000)*18/100+80);
//    }
//    if (n>4500){
//        printf("R$ %.2f\n",(n-4500)*28/100+350);
//    }

///0-50 -> 3.75 *
///0-75 -> 4.19 *
///76-200 -> 5.72 *
///201-300 -> 6.00
///301-400 -> 6.34
///401-600 -> 9.94
///600+ -> 11.46
