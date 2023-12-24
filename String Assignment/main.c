#include<stdio.h>

int main()
{

    int a[10][10], b[10][10], c[10][10], d[10][10], e[10][10], x, y, z;

    int sum = 0, multi = 0, subs = 0;

    printf("\nEnter Matrix A :\n");

    for (x = 0; x < 3; x++)
    {

        for (y = 0; y < 3; y++)
        {

            scanf("%d", &a[x][y]);

        }

    }

    printf("\nEnter Matrix B:\n");

    for (x = 0; x < 3; x++)
    {

        for (y = 0; y < 3; y++)
        {

            scanf("%d", &b[x][y]);

        }

    }

    printf("Matrix A is: \n");

    for (x = 0; x < 3; x++)
    {

        for (y = 0; y < 3; y++)
        {

            printf("%d ", a[x][y]);

        }

        printf("\n");

    }

    printf("Matrix B is : \n");

    for (x = 0; x < 3; x++)
    {

        for (y = 0; y < 3; y++)
        {

            printf("%d ", b[x][y]);

        }

        printf("\n");

    }

    for (x = 0; x <= 2; x++)
    {

        for (y = 0; y <= 2; y++)
        {
            sum=0;
            multi = 0;
            subs = 0;

            for (z = 0; z <= 2; z++)
            {

                sum = a[x][y] + b[x][y];
                multi = multi + a[x][z] * b[z][y];
                subs = a[x][y] - b[x][y];

            }

            c[x][y] = sum;
            d[x][y] = multi;
            e[x][y] = subs;

        }

    }

    printf("\nSum Of Matrix A and B : \n");

    for (x = 0; x < 3; x++)
    {

        for (y = 0; y < 3; y++)
        {

            printf("%d ", c[x][y]);

        }

        printf("\n");

    }

    printf("\nMultiplication Of Matrix A and B : \n");

    for (x = 0; x < 3; x++)
    {

        for (y = 0; y < 3; y++)
        {

            printf("%d ", d[x][y]);

        }

        printf("\n");

    }

    printf("\nSubtraction Of Matrix A and B : \n");

    for (x = 0; x < 3; x++)
    {

        for (y = 0; y < 3; y++)
        {

            printf("%d ", e[x][y]);

        }

        printf("\n");

    }

    return (0);

}










































//#include <stdio.h>
//
//int main()
//{
//    int first[80][80], second[80][80], result[80][80],r1,r2,c1,c2,i,j,k, sum=0;
//    printf("Enter the numbers or row and column for first matrix:\n");
//    scanf("%d%d", &r1, &c1);
//    printf("Enter the numbers or row and column for second matrix:\n");
//    scanf("%d%d", &r2, &c2);
//
//    while(c1!=r2)
//    {
//               printf("Error !!  column of first matrix should be equal to the row of second matrix\n");
//       printf("Enter the numbers or row and column for first matrix:\n");
//       scanf("%d%d", &r1, &c1);
//       printf("Enter the numbers or row and column for second matrix:\n");
//       scanf("%d%d", &r2, &c2);
//    }
//    //input for first matrix
//    printf("\nEnter elements for first matrix\n");
//    for(i=0;i<r1;i++)
//    {
//        for(j=0;j<c1;j++)
//        {
//            printf("first [%d][%d] = ", i, j);
//            scanf("%d", &first[i][j]);
//        }
//    }
//
//    //input for second matrix
//    printf("\nEnter elements for second matrix\n");
//    for(i=0;i<r2;i++)
//    {
//        for(j=0;j<c2;j++)
//        {
//            printf("second[%d][%d] = ", i, j);
//            scanf("%d", &second[i][j]);
//        }
//    }
//
//    //multiplying matrix
//    for(i=0;i<r1;i++)
//    {
//        for(j=0;j<c2;j++)
//        {
//            for(k=0;k<c1;k++)
//            {
//                sum = sum + first[i][k] * second[k][j];
//            }
//            result[i][j] = sum;
//            sum = 0;
//        }
//    }
//
//    //printing first matrix
//    printf("\nFirst matrix\n");
//    for(i=0;i<r1;i++)
//    {
//        for(j=0;j<c1;j++)
//            printf("%d ", first[i][j]);
//            printf("\n");
//    }
//
//    //printing second matrix
//    printf("\nSecond matrix\n");
//    for(i=0;i<r2;i++)
//    {
//        for(j=0;j<c2;j++)
//            printf("%d ", second[i][j]);
//            printf("\n");
//    }
//
//    //printing result matrix
//    printf("\n\nResult matrix\n");
//    for(i=0;i<r1;i++)
//    {
//        for(j=0;j<c2;j++)
//            printf("%d ", result[i][j]);
//            printf("\n");
//    }
//
//
//    return 0;
//}
//
//
//
//
//
//































/////13.10
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char st[100];
//    int i,p,a[256];
//    printf("Enter any line of text: ");
//    gets(st);
//    for(i=0; i<256; i++)
//        a[i]=0;
//    p=strlen(st);
//    for(i=0; i<p; i++)
//        a[st[i]]++;
//    for(i=0; i<256; i++)
//        if(a[i]>0)
//        printf("%c=%2d\t",i,a[i]);
//}
//















/////13.12;
//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//void main(){
//    char st[40][100],temp[40];
//    int i,n,outer,inner;
//
//
//    printf("How many word: ");
//    scanf("%d\n",&n);
//
//    for(i=0;i<n:i++)gets(st[i]);
//    for(outer=n-1;outer>=0;outer--)
//        for(inner=0;inner<outer:inner++)
//    if(strcmp(st[inner],st[inner+1])>0){
//        strcpy(temp,st[inner]);
//        strcpy(st[inner],st[inner+1]);
//        strcpy(st)
//    }
//
//}
//








/////13.11
//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//void main(){
//    char st[40][100];
//    int i,n;
//
//
//    printf("How many line: ");
//    scanf("%d\n",&n);
//
//    for(i=0;i<n;i++)gets(st[i]);
//
//    for(i=0;i<n;i++)printf("\n%s",st[i]);
//    getch();
//
//}
