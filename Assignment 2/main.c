#include <stdio.h>
#include <stdlib.h>

int main()
{
    int King,Queen;
    printf("Enter the age of King and Queen: ");
    scanf("%d %d",&King,&Queen);
    printf("The age of King= %d and Queen= %d \n",King,Queen);
    King++;Queen++;
    printf("The Post Incremented(i++) age of King= %d and Queen= %d \n",King,Queen);
    ++King;++Queen;
    printf("The Pre Incremented(++i) age of King= %d and Queen= %d \n",King,Queen);
    King--;Queen--;
    printf("The Post Decremented(i--) age of King= %d and Queen= %d \n",King,Queen);
    --King;--Queen;
    printf("The Pre Decremented(--i) age of King= %d and Queen= %d \n",King,Queen);
    return 0;
}















//    char character1,character2,character3,character4;
//    printf("Enter your characters:");
//    scanf("%c %c %c %c",&character1,&character2,&character3,&character4);
//    printf("ASCII Values of your Character1: %c = %d \n",character1,character1);
//    printf("ASCII Values of your Character2: %c = %d \n",character2,character2);
//    printf("ASCII Values of your Character3: %c = %d \n",character3,character3);
//    printf("ASCII Values of your Character4: %c = %d \n",character4,character4);
//    printf("(Character1+Character2)*(Character3-Character4): %d",(character1+character2)*(character3-character4));
