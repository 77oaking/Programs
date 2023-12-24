#include "hh.h"
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

garageowner garageownerlogin()
{
    FILE *fp;
    fp=fopen("gw.bin","rb");
    if(fp==NULL)
    {
        printf("Some error came up...");
        exit(1);
    }
    garageowner gw,rgw;

    printf("Enter your User ID:");
    scanf("%d",&gw.userid);
    printf("Enter your Pass:");
    scanf("%d",&gw.pass);
    while(fread(&rgw,sizeof(garageowner),1,fp))
    {
        if(rgw.userid==gw.userid && rgw.pass==gw.pass)
        {
            printf("Login Successful\n");
            return rgw;
        }
    }
    printf("Login Unsuccessful\n");
    return ;


}
void garageownerreg()
{
    FILE *fp;
    fp=fopen("gw.bin","ab");
    if(fp==NULL)
    {
        printf("Some error came up...");
        exit(1);
    }
    garageowner gw;
    printf("Enter your details...");
    printf("Choose Your Userid:");
    scanf("%d",&gw.userid);
    printf("Choose Your Pass:");
    scanf("%d",&gw.pass);
    printf("Enter your garage Size:");
    scanf("%d",&gw.garagesz);
    printf("Enter your Current Garage Empty size:");
    scanf("%d",&gw.currentstatus);
    printf("Enter your charge per hour:");
    scanf("%f",&gw.chargeperhour);
    gw.currentbalance=0;
    //printf("So here are your details:\nYour UserID:%d\nYour Pass:%s\nYour Garage Size:%d\nYour Chargeperhour:%.1f\n",gw.userid,gw.pass,gw.garagesz,gw.chargeperhour);
    fwrite(&gw,sizeof(garageowner),1,fp);
    fclose(fp);
}

vehicleowner vehicleownerlogin()
{
    FILE *fp;
    fp=fopen("vw.bin","rb");
    if(fp==NULL)
    {
        printf("Some error came up...");
        exit(1);
    }
    vehicleowner vw,rvw;

    printf("Enter your User ID:");
    scanf("%d",&vw.userid);
    printf("Enter your Pass:");
    scanf("%d",&vw.pass);
    while(fread(&rvw,sizeof(vehicleowner),1,fp))
    {
        if(rvw.userid==vw.userid && rvw.pass==vw.pass)
        {
            printf("Login Successful\n");
            return rvw;
        }
    }
    printf("Login Unsuccessful\n");
    return ;
}
void vehicleownerreg()
{
    FILE *fp;
    fp=fopen("vw.bin","ab");
    if(fp==NULL)
    {
        printf("Some error came up...");
        exit(1);
    }
    vehicleowner vw;
    printf("Enter your details...");
    printf("Choose Your Userid:");
    scanf("%d",&vw.userid);
    printf("Choose Your Pass:");
    scanf("%d",&vw.pass);
    vw.bill=0;
    //printf("So here are your details:\nYour UserID:%d\nYour Pass:%s\nYour Garage Size:%d\nYour Chargeperhour:%.1f\n",gw.userid,gw.pass,gw.garagesz,gw.chargeperhour);
    fwrite(&vw,sizeof(vehicleowner),1,fp);
    fclose(fp);

}

void garageownerdashboard(garageowner gw)
{
    if(gw.userid==NULL)return;
    system("CLS");
    printf("Welcome to your Garage Management System\n");
    printf("1.See Current Status\n");
    printf("2.Check Balance\n");
    printf("3.Exit\n");
    int choice;
    while((scanf("%d",&choice))&&(choice>0 && choice <4))
    {
        if(choice==1)
        {
            printf("Your Current Garage Empty Size is:%d",gw.currentstatus);
        }
        else if(choice==2)
        {
            printf("Your Current Balance is:%.2f",gw.currentbalance);
        }
        else exit(1);
    }

}
garageowner selectgarage()
{
    FILE *fp;
    fp=fopen("gw.bin","rb");
    garageowner gw;
    while(fread(&gw,sizeof(garageowner),1,fp))
    {
        printf("Garage UserID:%d\n",gw.userid);
        printf("Garage Size:%d\n",gw.garagesz);
        printf("Garage Empty Size:%d\n",gw.currentstatus);
        printf("Garage Cost Per Hour:%0.2f\n\n\n",gw.chargeperhour);

    }
    fclose(fp);
    int choose;
    printf("Choose Your Garage by entering Garage UserID\n");
    scanf("%d",&choose);
    fp=fopen("gw.bin","rb");
    while(fread(&gw,sizeof(garageowner),1,fp))
    {
        if(gw.userid==choose)
        {
            return gw;
        }
    }
    fclose(fp);
}
void addbilltogarageowner(double bill,garageowner gww)
{
    FILE *fp;
    fp=fopen("gw.bin","ab+");
    if(fp==NULL)
    {
        printf("Some error came up...");
        exit(1);
    }
    garageowner gw;
    while(fread(&gw,sizeof(garageowner),1,fp))
    {
        if(gw.userid==gww.userid)
        {
            gw.currentbalance+=bill;
            fwrite(&gw,sizeof(garageowner),1,fp);
        }
    }
    fclose(fp);
}
void vwgaragestatus(vehicleowner vw)
{
    printf("1.Check In.\n ");
    printf("2.Check Out.\n ");
    int chc;
    while((scanf("%d",&chc))&&(chc>0&&chc<3))
    {
        if(chc==1)
        {
            vw.chosengarage=selectgarage();
            system("CLS");
            vwgaragestatus(vw);
        }
        else if(chc==2)
        {
            printf("Enter your time(In Hours):");
            int time;
            scanf("%d",&time);
            vw.bill=time*vw.chosengarage.chargeperhour;
            printf("Your Bill is %lf \n",vw.bill);

            addbilltogarageowner(vw.bill,vw.chosengarage);
            //system("CLS");
            //vwgaragestatus(vw);
            printf("\/\/Thank You\/\/\n");
            return;
        }
    }

}
void vehicleownerdashboard(vehicleowner vw)
{
    //printf("Welcome To your Garage Management System\n");
    if(vw.userid==NULL)return;
    system("CLS");
    printf("********************Welcome to your Garage Management System********************\n");
    printf("1.Choose your Garage Status.\n");
    printf("2.Exit\n");
    int choice;
    while((scanf("%d",&choice))&&(choice>0 && choice <3))
    {
        if(choice==1)
        {
            vwgaragestatus(vw);

        }
        else if(choice==2)
        {
            return;
        }
    }

}
