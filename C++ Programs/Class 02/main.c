#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1=10;
    int var2=25;
    int _Var1=10;
    float var3=5.666646846546;
    char var5='A';
    char var6='a';
    int var7,var8,var9;
    var7=10;


//    printf("%d\n",var7);//var7=10
//    var7=20;//var7=20;
//    printf("%d\n",var7);//var7=20
//    printf("%d\n",var8);//var8=garbage value
//    var8=30;
//    printf("%d\n",var8);//var8=30


    var9=5;
    printf("%d\n",var9);//var9=5
    scanf("%d",&var9);///We take input from console///var9=10005


    ///scanf("%data_type",&variable_name);
    //& means address


    printf("This is variable 9: %d\n",var9);///var9=10005
    printf("This is variable 9: %d\n",var9+5);///var9=10010


    ///int->%d
    ///float->%f
    ///double->%lf
    ///char->%c
    /// data_type variable_name= value;
    ///printf("Text %data_type",variable_name);//var1
    ///printf("Text %data_type",var1+var2);
    return 0;
}
