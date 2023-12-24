#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float n;
    char ch;
    //scanf("%d %f %c",&a,&n,&ch);
    scanf("%4d",&a);///123456789
    printf("Output: %d",a);///1234
    //printf("The integer:%d\nThis is Float:%.2f\nThis is the char: %c\n",a,n,ch);
    //printf("%.1f",5.5);
    ///%[width].[precision]data_type
    //printf(5.5);
        int x, y;
    char text[20];

    scanf("%2d %d %*f %5s", &x, &y, text);
    /* input: 1234  5.7  elephant */
    printf("%d  %d  %s", x, y, text);
    /* output: 12  34  eleph */

    printf("Color: %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159);
    /* Color: red, Number: 42, float:  3.14  */

    printf("Pi = %3.2f \n", 3.14159);
    /* Pi = 3.14 */

    printf("Pi = %8.5f \n", 3.14159);
    /* Pi = 3.14159 */

    printf("Pi = %-8.5f \n", 3.14159);
    /* Pi = 3.14159 */

    printf("There are %d %s in the tree. \n", 22, "apples");
    /* There are 22 apples in the tree. */

    /*
    Take input A Students Age(int),Weight(float),Section(char)
    And display in the following format:
    Age:
    Weight:
    Section:
    */
    return 0;
}
