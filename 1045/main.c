#include <stdio.h>
#include <stdlib.h>

int main()
{
//    double A,B,C,a,b,c;
//    scanf("%lf%lf%lf",&a,&b,&c);
//    if(a>b&&a>c){
//        if(b>c){
//            A=a;
//            B=b;
//            C=c;
//        }else{
//            A=a;
//            B=c;
//            C=b;
//        }
//    }
//    if(b>c&&b>a){
//        if(a>c){
//            A=b;
//            B=a;
//            C=c;
//        }else{
//            A=b;
//            B=c;
//            C=a;
//        }
//    }
//    if(c>a&&c>b){
//        if(a>b){
//            A=c;
//            B=a;
//            C=b;
//        }else{
//            A=c;
//            B=b;
//            C=a;
//        }
//    }
//    if(A>=B+C){
//        printf("NAO FORMA TRIANGULO\n");}
//    else{if(A*A==B*B+C*C){
//        printf("TRIANGULO RETANGULO\n");
//    }
//    if(A*A>B*B+C*C){
//        printf("TRIANGULO OBTUSANGULO\n");
//    }
//    if(A*A<B*B+C*C){
//        printf("TRIANGULO ACUTANGULO\n");
//    }
//    if(A==B&&B==C){
//        printf("TRIANGULO EQUILATERO\n");
//    }
//    if(A==B||B==C){
//        printf("TRIANGULO ISOSCELES\n");
//    }
//    }
//    printf("%lf %lf %lf\n",A,B,C);



 double a, b, c, temp;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b)

    {

        temp = a;

        a = b;

        b = temp;

    }

    if (b < c)

    {

        temp = b;

        b = c;

        c = temp;

    }

    if (a < b)

    {

        temp = a;

        a = b;

        b = temp;

    }

    if (a >= b + c)

    {

        printf("NAO FORMA TRIANGULO\n");

    }

    else if (a * a == b * b + c * c)

    {

        printf("TRIANGULO RETANGULO\n");

    }

    else if (a * a > b * b + c * c)

    {

        printf("TRIANGULO OBTUSANGULO\n");

    }

    else if (a * a < b * b + c * c)

    {

        printf("TRIANGULO ACUTANGULO\n");

    }



    if (a == b && b == c)

    {

        printf("TRIANGULO EQUILATERO\n");

    }

    else if (a == b || b == c)

    {

        printf("TRIANGULO ISOSCELES\n");

    }

    return 0;
}
