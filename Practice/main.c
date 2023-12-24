#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
//    int i,num,j;
//    j=1;
//    printf("Enter any number:");
//    scanf("%d",&num);
//    for(i=1;i<=10;i++)
//    {
//        printf("%d X %d= %d \n", num,i,i*num);
//    }
//    do{
//        printf("%d X %d= %d \n", num,i,i*num);
//        i++;
//        j++;
//    }while(i<=10&&j<=num);

//    for(i=1,j=1;i<=10,j<=num;i++,j++){
//        printf("%d X %d = %d \n",num,j,num*j);
//    }


//    int  i,num[100],a,sum=0,max,min;
//    printf("Enter how many number you need to enter: ");
//    scanf("%d",&i);
//    printf("Enter %d numbers: ",i);
//    for(a=1;a<=i;a++){
//        scanf("%d",&num[a]);
//        sum=sum+num[a];
//    }
//    for(a=1;a<=i;a++){
//        printf("%d\t",num[a]);
//
//    }
//    printf("\n Sum of yours numbers: %d \n",sum);
//    printf("Average of your Numbers: %.1f \n",(float)sum/i);
//    max=num[0];
//    min=num[0];
//    for(a=1;a<=i;a++){
//        if(max<num[a])
//            max=num[a];
//    }
//    printf("Maximum Number is %d ",max);
//    for(a=1;a<=i;a++){
//        if(min>num[a])
//            min=num[a];
//    }
//    printf("Minimum Number is %d ",min);


    int row,col,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d\t",col);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d\t",col);
        }
        printf("\n");
    }









///ternery operator use
/**
//    int a,b,c,mini;
//    scanf("%d %d %d",&a,&b,&c);
//    mini= (a<b)? (a<c)? a:c: (b<c)? b:c;
//    printf("%d",mini);
**/






    return 0;
}
