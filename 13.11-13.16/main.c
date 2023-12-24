//13.12
#include<stdio.h>
#include<string.h>
int main()
{
    char st[40][100],temp[40];
    int i,a,outer,inner;
    printf("How many word: ");
    scanf("%d",&a);
    for(i=0; i<a; i++)
        scanf("%s",st[i]);
//    for(i=0; i<a; i++)
//        printf("\n%s", st[i]);
    for(outer=a-1; outer>=0; outer--)
    {
        for(inner=0; inner<outer; inner++)
        {
            if(strcmpi(st[inner],st[inner+1])>0)
            {
                strcpy(temp,st[inner]);
                strcpy(st[inner],st[inner+1]);
                strcpy(st[inner+1],temp);
            }
        }
    }
    for(i=0; i<a; i++)
        printf("\n%s", st[i]);

    return 0;

}
