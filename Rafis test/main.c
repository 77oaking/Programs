#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int count=0;
    char response;
    for(count=1;count<=100;count++)
    {
        start:
        printf("count = %d\n",count);
        printf("print next? Y/y to continue any other key to terminate : ");
        scanf("%c",&response);
        if (response == 'Y' || response == 'y') goto start;else break;
    }
//    while(1){
//        printf("count = %d\n",count);
//        printf("print next? Y/y to continue any other key to terminate : ");
//        scanf("%c",&response);
//        switch(response){
//            case 'Y':continue;
//            case 'y':continue;
//            default: break;
//        }
//            count++;
//    }
    printf("Terminated at the count = %d\n",count);
    return 0;
}
