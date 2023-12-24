#include<stdio.h>
///stdio.h Standard Input output .h-> header file
///#include<header_file>

#include<math.h>
#include<stdlib.h>
///standard library


int main(){

    ///Age:19 ->Integer
    ///Weight:70.5 -> Fraction
    ///Sec: C ->Character
    ///You are breathing: True ->Boolean
    ///To store Integer type data
    /// Value store Variable
    int var1=90;///var1-> age
    printf("This displays %d too\n",var1);
    float var2;
    printf("Enter \nyour \nage:\n");/// \n
    scanf("%d %f",&var1,&var2);///For integer input we use %d
    //scanf("%f",&var2);///For float input we use %f

    printf("Your age is: %d \n",var1);//?
    printf("Your age is: %f\n",var2);//?
    printf("Your age is: %d %f\n",var1,var2);//?
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a=%d\nb=%d\n",a,b);




    return 0;
}



/*


    function


*/
