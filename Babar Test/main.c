#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20]={};
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++)
        if(isupper(str[i]))
            printf("This is upper case: %c\n",str[i]);
        else if(islower(str[i]))
            printf("This is lowercase: %c\n",str[i]);
    system("pause");
    return 0;
}
