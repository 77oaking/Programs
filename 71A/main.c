#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
int main()
{
    int n,t;

    scanf("%d",&n);
    t=1;
    while(n>=t){
            char s[1000];
            scanf("%s",&s);
            int a=strlen(s);
            if(a>10){
                printf("%c",s[0]);//it will not work if you use %s
                printf("%d",a-2);
                printf("%c\n",s[a-1]);
            }
            else
                printf("%s\n",s);
        t++;
    }
    return 0;
}
