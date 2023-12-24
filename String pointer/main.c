#include <stdio.h>
#include <stdlib.h>

int strlen(char *str){
    int count=0;
    while(*str++!='\0'){count++;}
    return count;
}
void strcopy(char *main,char *cpy){
    while(*main!='\0'){
        *cpy++ = *main++;
        //*main++;
        //*cpy++;
    }
}
int strprefix(char *str1,char *str2){
    while(*str2 != '\0'){
        if(*str2++ != *str1++)
            return 0;
    }
    return 1;
}

int strsubfix(char *s1,char *s2){
    while(*s1!='\0'){
        if(strprefix(*s1++,*s2))return 1;
    }
    return 0;
}
int main()
{
    char str1[]="123456";
    char str3[]="23";

    printf("%d\n",strsubfix(str1,str3));









//    char strmain[]="This is main";
//    char copy[100];
//    strcopy(strmain,copy);
//    printf("%s",copy);
    return 0;
}
