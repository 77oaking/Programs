#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int value;
    char st1[100],st2[100],tmpst1[100],tmpst2[100];
    printf("Enter your 1st line:\n");
    gets(st1);
    printf("Enter your 2nd line:\n");
    gets(st2);
    int len1=strlen(st1);
    int len2=strlen(st2);

    for(int i=0;i<len1;i++){
        if(st1[i]>97&&st1[i]<122){
            tmpst1[i]=st1[i]-32;
        }else tmpst1[i]=st1[i];
    }
    for(int i=0;i<len2;i++){
        if(st2[i]>97&&st2[i]<122){
            tmpst2[i]=st2[i]-32;
        }else tmpst2[i]=st2[i];
    }

    for(int i=0;i<len1;i++){
        if(tmpst1[i]==tmpst2[i]){
            value=1;
        }else value=0;
    }
    printf("%s",(value)?"Both are same":"Both are not same");


    return 0;
}


//#include <stdio.h>
//#include <ctype.h>
//
//
///********************************************************
//    *   function name       :stringCmp, stringCmpi
//    *   Parameter           :char* s1,char* s2
//    *   Return              :0- success, 1- fail
//    *   Description
//        stringCmp   - compares two strings
//        stringCmpi  - compares two string (ignoring case)
//********************************************************/
//int stringCmp (char *s1,char *s2);
//int stringCmpi(char *s1,char *s2);
//
//int main()
//{
//    char str1[100],str2[100];
//
//	printf("Enter  string 1 : ");
//    scanf("%[^\n]s",str1);//read string with spaces
//
//    getchar(); //to read enter after first string
//
//    printf("Enter  string 2 : ");
//    scanf("%[^\n]s",str2);//read string with spaces
//
//    if(!stringCmp(str1,str2))
//        printf("\n stringCmp  :String are same.");
//    else
//        printf("\n stringCmp  :String are not same.");
//
//    if(!stringCmpi(str1,str2))
//        printf("\n stringCmpi :String are same.");
//    else
//        printf("\n stringCmpi :String are not same.");
//
//
//    printf("\n");
//    return 0;
//}
//
///******** function definition *******/
//int stringCmp (char *s1,char *s2)
//{
//    int i=0;
//    for(i=0; s1[i]!='\0'; i++)
//    {
//        if(s1[i]!=s2[i])
//            return 1;
//    }
//    return 0;
//}
//
///******** function definition *******/
//int stringCmpi (char *s1,char *s2)
//{
//    int i=0,diff=0;
//    for(i=0; s1[i]!='\0'; i++)
//    {
//        if( toupper(s1[i])!=toupper(s2[i]) )
//            return 1;
//    }
//    return 0;
//}


//    int a[5],i=0,sum=0;
//    float avg;
//    printf("Enter 5 numbers:");    ///sum,avg
//
//    do{
//        scanf("%d",&a[i]);
//        i++;
//    }while(i<5);
//    i=0;
//
//    do{
//        printf("%d ",a[i]);
//        i++;
//    }while(i<5);
//    i=0;
//
//    do{
//        sum=sum+a[i];
//        i++;
//    }while(i<5);
//    avg=sum/5;
//    printf("\nSUM=%d\n",sum);
//    printf("AVERAGE=%.2f\n",avg);
