#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,y;
    printf("Any date in format(DD MM YYYY):");
    scanf("%d%*c%d%*c%d",&d,&m,&y);
    printf("\nDay = %d\nMonth = %d\nMonth = %d",d,m,y);


    return 0;
}
