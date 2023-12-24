#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,j=1,k=1,l=1;
    scanf("%d", &n);
    for(i = 0;i < n;i++){
        k=j*j;
        l=j*j*j;
        printf("%d %d %d\n", j,k,l);
        printf("%d %d %d\n", j,k+1,l+1);
        j++;
    }






    return 0;
}
