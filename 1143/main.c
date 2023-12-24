#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,j=1;
    scanf("%d", &n);
    for(i = 0;i < n;i++){
        printf("%d %d %d\n", j, j*j, j*j*j);
        j++;
    }





    return 0;
}
