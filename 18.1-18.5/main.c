///18.31
#include<stdio.h>

int Copy(char st1[], char st2[])
{
    int i;

    for (i=0; st2[i]; i++)
        st1[i]=st2[i];
    st1[i]=0;
}

int main()
{
    char st1[100],st2[100];
    printf("Enter First String: ");
    scanf("%s",st1);
    printf("Enter Second String: ");
    scanf("%s",st2);

    Copy(st1,st2);

    printf("\nFirst String is: %s",st1);
    printf("\nSecond String is: %s",st2);
    return 0;
}
