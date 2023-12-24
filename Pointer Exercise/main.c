#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "rectangle.h"
int main()
{
//    point a={'A',1,2};
//    point b={'B',4,6};
//    showpoint(a);
//    showpoint(b);
//    printf("Distance: %.2lf\n",dist(a,b));
//    printf("%d",eq(a,a));
//    rect r1={ { 'A',1,2 },{ 'B',4,4 } };
//    rect r2={ { 'C',5,6 },{ 'D',9,10 } };
//    printf("Area %.2lf\n",area(r1));
//    point p={ 'F',2,3 };
//    printf("%s",pointinside(r1,p)?"The point is inside\n":"The point is not inside\n");
//    printf("%s",rectinside(r1,r2)?"The rect is inside\n":"The rect is not inside\n");

    point arr[10];
    printf("Enter how many points do you want(0-10):");
    int n;
    scanf("%d",&n);
    while(n<0 || n>10)
        scanf("%d",&n);

    fillPoints(arr,n);
    //printPoints(arr,n);
    farthest(arr,n);

    return 0;
}
