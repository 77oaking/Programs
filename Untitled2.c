#include<stdio.h>

int main(){

    //if(condition){ Condition=true/false
    //if(condition){statement if(condition){statement}}
    ///if(condition){if(condition){statement}}
    /// && -> AND ||-> OR
    /// && will return true if and only if both of the condition is true
    /// || will return true if any of the condition is true
    int x=-5;
    int y=9,i=1,j=100;
//    if(x>0){
//        if(y<10){
//            printf("X is greater than 0 and Y is less than 10.\n");
//        }
//    }
//    if(x>0 && y<10 && i==1 && j==100){/// Will execute when both of the condition is true.
//        printf("X is greater than 0, Y is less than 10.\n");
//    }
//    if(x>0 || y<10 || i==2 || j==200){///Or Logical Operator
//        printf("Statement is running.\n");
//    }
//    if(x>0){
//        x=5;
//    }else x=0;
//    x=(x>0)?5:0;
//    /// Exp1?Exp2:Exp3;
//    /// Condition in Exp1 if true then Exp2 else Exp3
//    printf("%d",x);


//    if(i==0){
//        printf("i = %d",i);
//    }else if(i==1){
//        printf("i = %d",i);
//    }else if(i==2){
//        printf("i = %d",i);
//    }else if(i==3){
//        printf("i = %d",i);
//    }
    switch(i){
    case 0:
        printf("i = %d",i);
        break;
    case 1:
        printf("i = %d",i);
        break;
    case 2:
        printf("i = %d",i);
        break;
    default:
        break;
    }

    /*
    switch(variable){
    case value:
        statement;
        break;
        .
        .
        .
        .
        .
        .
        .
        .

    case value:
        statement;
        break;
    default:
        statement;
        break;
    }

    */


    return 0;
}
