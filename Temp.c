#include<stdio.h>
int slen(char ar[])
{
    int i=0,c=0;
    while (ar[i]!='\0')
    {
        c++;
        i++;
    }
    return c;
}

void convlow(char str[])
{
    for(int i=0; i<slen(str); i++)
    {
        if(str[i]<97)
        {
            str[i]=str[i]+32;
        }
    }
}

void main ()
{
    char st1[20]="",st2[10]="";
    int i=0;
    gets(st1);
    gets(st2);
    convlow(st1);
    convlow(st2);
    int len=(slen(st1)>slen(st2))?slen(st1):slen(st2);
    for(int i=0;i<len;i++){
        if(st1[i]!=st2[i]){
            printf("Not same");
            return;
        }
    }
    printf("Same");

    }
