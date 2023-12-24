#include "hh.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    printf("********************Welcome to our Garage Management System********************\n");
    printf("Choose your option:\n");
    printf("Press 1 for Garage Owner\n");
    printf("Press 2 for Vehicle Owner\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1){
        printf("\n To Register Choose 1\nTo Login Choose 2\n");
        scanf("%d",&choice);
        if(choice==1){
            garageownerreg();
            system("CLS");
            garageownerdashboard(garageownerlogin());
        }else if(choice ==2){
            garageownerdashboard(garageownerlogin());
        }
    }else if(choice==2){
        printf("\n To Register Choose 1\n To Login Choose 2\n");
        scanf("%d",&choice);
        if(choice==1){
            vehicleownerreg();
            vehicleownerdashboard(vehicleownerlogin());
        }else if(choice ==2){
            vehicleownerdashboard(vehicleownerlogin());
        }
    }



    return 0;
}
