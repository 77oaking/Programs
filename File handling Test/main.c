#include<stdio.h>
#include<stdlib.h>

int main()
{
   FILE *fp;
   fp = fopen("donation.txt", "w");
   char name[20];


   int i, donation = 0;
  for(i = 1; i <= 2; i++)
   {
       printf("\nEnter name : ");
       scanf("%s",name); //getchar();
       printf("\nEnter amount : ");
       scanf("%d",&donation);

       fprintf(fp,"%s %d\n",name,donation);
   }
   fclose(fp);

    fp=fopen("donation.txt","r");
   char b[20];
   int sum = 0;
   int var;
   int j=0;
   while(j<2){
        fscanf(fp,"%s %d",b,&var);
        printf("%s\n%d\n",b,var);

        sum = sum + var;
        j++;
   }
   printf("\nTotal donation : %d",sum);

   fclose(fp);

   return 0;
}
