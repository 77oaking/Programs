#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void printarray(int k){
    int n=k;
    char c[100];
    for(int i=0;i<n;i++){
        scanf("%c",&c[i]);
        fflush(stdin);
    }
    for(int i=0;i<n;i++){
        printf("%c ",c[i]);
    }

    getch();
}

int main()
{

    int n;
    scanf("%d\n",&n);
    printarray(n);


    return 0;
}




//    char s[100];
//    scanf("%s",s);
//    printf("\n");
//    int temp;
//    for(int i=0;i<strlen(s);i++){
//        temp=temp+(s[i]-'0')*10;
//    }
//    printf("%d",temp);


//    ///big bug. try to solve it
//
//    int sum=0,x,p=1,j=1,n=2;
//    printf("Enter the terms: ");
//    scanf("%d",&j);
//    printf("Enter value of x: ");
//    scanf("%d",&x);
//
//    for(int i=1;i<j+1;j++){
//        int fact=1,temp;
//        for (int m = 1; m <= n; m++){
//            fact *= m;
//        }
//        printf("%d",fact);
//        if(i%2==0){
//            sum=sum + fact * pow(x,p);
//        }else sum=sum - fact * pow(x,p);
//        temp=pow(x,p);
//        sum=sum + fact * temp;
//        printf("%d",sum);
//        n=n+2;
//        p=p+2;
//    }
//    printf("%d",sum);
