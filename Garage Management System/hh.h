#ifndef HH_H_INCLUDED
#define HH_H_INCLUDED


typedef struct {
    int userid;
    int pass;
    //int serialnum;
    int garagesz;
    int currentstatus;
    float chargeperhour;
    double currentbalance;
}garageowner;

typedef struct {
    int userid;
    int pass;
    garageowner chosengarage;//this will be the userid of garageonwer
    double bill;
}vehicleowner;

garageowner garageownerlogin();
void garageownerreg();
vehicleowner vehicleownerlogin();
void vehicleownerreg();
void garageownerdashboard(garageowner gw);



void vehicleownerdashboard(vehicleowner vw);


#endif // HH_H_INCLUDED
