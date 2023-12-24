#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stu;
    float avg;
    printf("Enter student count:");
    scanf("%d",&stu);
    for(int i=0;i<stu;i++){
        int sub=0,sum=0;
        printf("Enter student %d sub number:",i+1);
        scanf("%d",&sub);
        for(int j=0;j<sub;j++){
            int mark;
            printf("Enter subject %d mark",j+1);
            scanf("%d",&mark);
            sum+=mark;
        }
        printf("Average= %d\n",sum/sub);

    }
    return 0;
}
