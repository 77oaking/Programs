#include <stdio.h>
#include <stdlib.h>

int main()
{
    //long long int a,b,c;
    long long int aa;//long long data type for holding big integer
    aa=100000;//Taking the initial population
    for(int i=1;i<=10;i++){//running the loop for 10 times because it is told to calculate for 10 years
        aa=aa+aa*0.1;//every time after the increment of 10% the value will be stored in this variable
        printf("Population in %d year: %d\n",i,aa);//Printing the population each year
    }
    return 0;
}
