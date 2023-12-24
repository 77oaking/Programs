#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char s[]={"Scoring Football."};///string-> %s
//    char s[]={"Shakib Al Hasan"};
//    puts(s);
    ///puts(string_variabel_name); -> Outputs the String
    //printf("%s",s);
//    char str[20];
//    //scanf("%s",str);///It takes input till Space
//    gets(str);///Takes input the String till line break.
//    puts(str);
    char st[6];///Array[5]
    /*
    st[0]='A';
    st[1]='B';
    st[2]='C';
    st[3]='\0';
    .
    .
    st[5]='F';
    st[6]='\0';


    */
    gets(st);
    int i=strlen(st);
    printf("%d\n",i);///i=3 3-1
    printf("%c",st[i-1]);
    //puts(st);
    return 0;
}
