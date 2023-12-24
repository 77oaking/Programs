#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    double y,con;
    scanf("%d%lf",&x,&y);
    con=x/y;
    printf("%.3lf km/l\n",con);

    return 0;
}
