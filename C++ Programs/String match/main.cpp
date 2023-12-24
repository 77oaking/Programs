#include <iostream>
#include<conio.h>

using namespace std;

char *match(char c,char *s);

main(void)
{
    char s[80],*p,ch;
    gets(s);
    ch=getche();
    p=match(ch,s);
    if(p){printf(" %s",p);}
    else printf("No match found");
    return 0;
}

char *match(char c,char *s){
    register int count;
    count =0;
    while(c!=s[count] && s[count])count++;
    return (&s[count]);

}

