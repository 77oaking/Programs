#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("input.txt","r");
    ///f_pointer=fopen("file_address.extension","mode");
    /*
    r-> read
    Changes nothing
   w-> write
        Creates file if not available
        Removes previous data
   a-> append
        Add after previous data
    */
    char name[20];
    fscanf(fp,"%[^\n]s",name);
    printf("%s",name);

    fclose(fp);
    fp=fopen("output.txt","w");
    fprintf(fp,"%s",name);


    return 0;
}
