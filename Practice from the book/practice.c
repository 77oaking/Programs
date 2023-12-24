#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"practice.h"

int factorial(int n){
    int fact=1;
    for(int j=n;j>0;j--){
        fact=fact*j;
    }
//    printf("%d",fact);
    return fact;
}

int sumofdigit(int n){
    int temp=n;
    int sum=0;
    while(temp!=0){
        int r=temp%10;
        sum+=r;
        temp/=10;
    }
    return sum;
}
int reverseofdigit(int n){

    int temp=n;
    int sum=0;
    while(temp!=0){
        int r=temp%10;
        sum=sum*10+r;
        temp/=10;
    }
    return sum;
}


int displaybinary(int n){
    int temp=n;
    int remainder=0;
    int tempsum=0;
    while(temp!=0){
        remainder=temp%2;
        tempsum=tempsum*10+remainder;
        temp=temp/2;
    }
    return tempsum;
}


