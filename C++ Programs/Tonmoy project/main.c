#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct
{
    char name[20];
    char id[10];
    float marks[3][4];
    float cgpa;
} student;

void print(student st[])
{
    FILE *p=fopen("output.txt","w");

    for(int i=0; i<10; i++)
    {
        fprintf(p,"Student %d:\n",i+1);
        fprintf(p,"Name: %s\n",st[i].name);
        fprintf(p,"Id: %s\n",st[i].id);


        for(int j=0; j<3; j++)
        {
            fprintf(p,"Subject %d marks:",j+1);
            for(int m=0; m<4; m++)
            {

                fprintf(p,"%.1f ",st[i].marks[j][m]);
            }
            fprintf(p,"\n");
        }
        fprintf(p,"CGPA: %.1f\n",st[i].cgpa);
    }
    fclose(p);

}

void printtotal(student st[]){
    FILE *p=fopen("output.txt","a");
    for(int i=0; i<10; i++)
    {
        fprintf(p,"Student %d: \n",i+1);
        for(int j=0; j<3; j++)
        {
            float sum=0;

            for(int m=0; m<4; m++)
            {
                sum=sum+st[i].marks[j][m];
            }
            fprintf(p,"Subject %d total: %.1f\n",j+1,sum);

        }
    }
    fclose(p);

}
int maxCGPA(student st[]){
    FILE *p=fopen("output.txt","a");
    float max=st[0].cgpa;
    for(int i=0; i<10; i++){
        if(max<st[i].cgpa)max=st[i].cgpa;

    }
    fprintf(p,"Maximum CGPA: %.1f\n",max);
    fclose(p);
}

int minCGPA(student st[]){
    FILE *p=fopen("output.txt","a");
    float min=st[0].cgpa;
    for(int i=0; i<10; i++){
        if(min>st[i].cgpa)min=st[i].cgpa;

    }
    fprintf(p,"Minimum CGPA: %.1f\n",min);
    fclose(p);
}

int main()
{
    student st[10];
    FILE *p=fopen("input.txt","r");
    for(int i=0; i<=10; i++)
    {
        fscanf(p,"%s %s",st[i].name,st[i].id);
        for(int j=0; j<3; j++)
        {
            for(int m=0; m<4; m++)
            {
                fscanf(p,"%f",&st[i].marks[j][m]);
            }
        }
        fscanf(p,"%f",&st[i].cgpa);
    }
    print(st);
    printtotal(st);
    maxCGPA(st);
    minCGPA(st);
    fclose(p);

    return 0;
}
