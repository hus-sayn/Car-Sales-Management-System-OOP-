#pragma once
#include "user.h"
class buyer :
    public user
{

    string company;
    int price_range;
    string model;
    int make_year;
    string vehicle_name;
    string   city_name;
    string seller_name;
    string   discription;
    int contact;
    string fuel_type;
    bool engine;
    int rating;  
    string color;
public:
    void Register();
    void login() override;
    bool isUserExists(const string& username, const string& password);
    void viewVehicles();
    void viewVehicleDetails(const string& catogery);

   void viewAuction();
     //void inspectionReport();
    void viewNotifications();


}; 
