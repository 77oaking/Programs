#include<stdio.h>
struct personal{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;};
///Syeda Farzana AMir Antora 213-35-783
main()
{
    struct personal person;
    printf("Input Values\n");
    scanf("%s %d %s %d %f",person.name,&person.day,person.month,&person.year,&person.salary);
    printf("%s %d %s %d %f\n",person.name,person.day,person.month,person.year,person.salary);
}

























//#include<stdio.h>
//#include<string.h>
//main()
//{
//    ///Syeda Farzana AMir Antora 213-35-783
//int i,j,n;
//char str[100][100],s[100];
//printf("Enter number of names \n");
//scanf("%d",&n);
//printf("Enter names in any order\n");
//for(i=0;i<n;i++)
//{
// scanf("%s",str[i]);
//}
//
//
//for(i=0;i<n;i++)
//{
// for(j=i+1;j<n;j++)
// {
//   if(strcmp(str[i],str[j])>0)
//   {
//    strcpy(s,str[i]);
//    strcpy(str[i],str[j]);
//    strcpy(str[j],s);
//   }
//
// }
//
//}
//printf("\nThe sorted order of alphabets are:\n");
//for(i=0;i<n;i++)
//{
// printf("%s\n",str[i]);
//}
//
//}










//#include <stdio.h>
//int fact(int);
/////Syeda Farzana AMir Antora 213-35-783
//void main()
//{
//	int no,factorial;
//
//  	printf("Enter a number to calculate it's factorial\n");
//  	scanf("%d",&no);
//  	factorial=fact(no);
//    printf("Factorial of the num(%d) = %d\n",no,factorial);
//
//}
//
//int fact(int n)
//{
//    int i,f=1;
//    for(i=1;i<=n;i++)
//    {
//        f=f*i;
//    }
//    return f;
//}














//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    ///Syeda Farzana AMir Antora 213-35-783
//    float value[20];
//    int i,low,high;
//    int group[11]={};
//    for(i=0;i<20;i++){
//        scanf("%f, ",&value[i]);
//        ++group[(int)(value[i])/10];
//    }
//    printf("\n");
//    printf("Group Range Frequency\n");
//    for(i=0;i<11;i++){
//        low=i*10;
//        if(i==10){
//            high=100;
//        }
//        else high=low+9;
//        printf(" %2d %3d to %3d %d\n"
//               ,i+1,low,high,group[i]);
//    }
//    return 0;
//}

































