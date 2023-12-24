#include <stdio.h>
#include <stdlib.h>

int main()
{
      int num[5]= {12,34,56,1,5};
    int value,i,pos=0;
    printf("You want to search value:");
    scanf("%d",&value);
    for(i=0; i<6; i++)
    {
        if(value == num[i])
        {
            printf("Position %d=%d",value,i+1);
            pos++;
        }
    }
    if(pos==0){
        printf("Value not found");
    }

    return 0;
}





//    int n,a,b;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%d %d",&a,&b);
//        printf("Case %d: %d\n",i+1,a+b);
//    }
