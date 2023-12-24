#include <stdio.h>

void PrimeCount(int x,int n)
{
    int i,j;
    for( i=x;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

       if(c==2)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int X,a,N;
    scanf("%d %d", &N,&X);
    PrimeCount(N,X);
    return 0;
}
