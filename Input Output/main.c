#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int x=5;
    float f=5.5;
    double d=5.55555;
    char c = 'C';
    char S[]="Azman Hossain";
    _Bool B= true;
    printf("Print Integer=%d\nPrint Float=%f\nPrint Douoble=%lf\nPrint Char=%c\nPrint String=%s\nPrint Boolean=%d\n",x,f,d,c,S,B);
    printf("Print Float=%0.2lf\n",d);///If you put a limit befor the declaration like %0.2lf it will print the value of Double till next two digits.
    char name[50];
    scanf("%s",name);
    printf("Print Name:%s\n",name);
    ///There is a lot more information in the video.like fflush(stdin);
    system("pause");
    return 0;
}
