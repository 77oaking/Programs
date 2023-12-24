#include <stdio.h>
#include <stdlib.h>

int main()
{
    int course[4],scholarship=0,check=0;
    printf("Enter Programming Marks:");
    scanf("%d",&course[0]);
    if(course[0]>90){
        scholarship+=9000;
        check++;
    }
    printf("Enter Math Marks:");
    scanf("%d",&course[1]);
    if(course[1]>85){
        scholarship+=7000;
        check++;
    }
    printf("Enter Physics Marks:");
    scanf("%d",&course[2]);
    if(course[2]>80 && check<2){
        scholarship+=5000;
        check++;
    }
    printf("Enter Physics Marks:");
    scanf("%d",&course[3]);
    if(course[3]>80 && check<2){
        scholarship+=4000;
        check++;
    }
    printf("Total Scholarship: %d",scholarship);

    return 0;
}








